#include "Digraph.h"

bool Digraph::addVertex(const Node &v) {
    if (!this->containsVertex(v)) {
        this->allVertices.push_back(v);
        this->inEdges[v] = std::vector<Edge>();
        this->outEdges[v] = std::vector<Edge>();
        return true;
    }
    return false;
}

bool Digraph::isDirected() {
    return true;
}

bool Digraph::removeVertex(const Node &v) {
    auto it = std::find(this->allVertices.begin(), this->allVertices.end(), v);
    if (it != this->allVertices.end()) {
        this->allVertices.erase(it);
        this->allEdges.erase(inEdges[v].begin(), inEdges[v].end());
        inEdges.erase(v);
        this->allEdges.erase(outEdges[v].begin(), outEdges[v].end());
        outEdges.erase(v);
        return true;
    }
    return false;
}

bool Digraph::addEdge(const Edge &e) {
    if (!this->containsVertex(e.source)) {
        throw std::runtime_error("No such source-vertex in this graph!");
    } else if (!this->containsVertex(e.target)) {
        throw std::runtime_error("No such target-vertex in this graph!");
    } else if (!this->containsEdge(e)) {
        this->allEdges.push_back(e);
        this->inEdges[e.target].push_back(e);
        this->outEdges[e.source].push_back(e);
        return true;
    } else {
        return false;
    }
}

bool Digraph::addEdge(const Node &source, const Node &target) {
    return this->addEdge(Edge(source, Label(1), target));
}

bool Digraph::removeEdge(const Edge &e) {
    auto it = std::find(this->allEdges.begin(), this->allEdges.end(), e);
    if (it != this->allEdges.end()) {
        this->allEdges.erase(it);
        std::remove(this->inEdges[e.target].begin(), this->inEdges[e.target].end(), e);
        std::remove(this->outEdges[e.source].begin(), this->outEdges[e.source].end(), e);
        return true;
    }
    return false;
}

std::vector<Edge> Digraph::removeEdges(const Node &source, const Node &target) {
    return {};
}

size_t Digraph::vertexCount() {
    return this->allVertices.size();
}

size_t Digraph::edgeCount() {
    return this->allEdges.size();
}

size_t Digraph::getInDegree(const Node &v) {
    if (!this->containsVertex(v)) {
        throw std::runtime_error("No such vertex in this graph!");
    } else {
        return this->inEdges[v].size();
    }
}

size_t Digraph::getOutDegree(const Node &v) {
    if (!this->containsVertex(v)) {
        throw std::runtime_error("No such vertex in this graph!");
    } else {
        return this->outEdges[v].size();
    }
}

bool Digraph::containsEdge(const Edge &e) {
    auto it = std::find(this->allEdges.begin(), this->allEdges.end(), e);
    return it != this->allEdges.end();
}

bool Digraph::containsVertex(const Node &v) {
    auto it = std::find(this->allVertices.begin(), this->allVertices.end(), v);
    return it != this->allVertices.end();
}

void Digraph::DFS() {
    for (auto &vertex: this->allVertices) {
        vertex.reset();
    }
    int time = 0;
    for (auto &vertex: allVertices) {
        if (vertex.getColor() == WHITE) {
            dfsVisit(vertex, time);
        }
    }
}

void Digraph::dfsVisit(Node &node, int &time) {
    node.setStart(time++);
    node.setColor(GREY);
    for (const auto &outEdge: outEdges[node]) {
        Node vertex = outEdge.target;
        if (vertex.getColor() == WHITE) {
            vertex.setParent(&node);
            dfsVisit(vertex, time);
        }
    }
    node.setColor(BLACK);
    node.setFinish(time++);
}

std::vector<Node> Digraph::topologicalSort() {
    DFS();
    std::vector<Node> sortedVertexes(allVertices.begin(), allVertices.end());
    std::sort(sortedVertexes.begin(), sortedVertexes.end(), [](const Node &a, const Node &b) -> bool {
        return a.getFinish() < b.getFinish();
    });
    return sortedVertexes;
}



