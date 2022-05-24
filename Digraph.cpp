#include "Digraph.h"

bool Digraph::addVertex(const Node &v) {
    auto res = this->allVertices.insert(v);
    if (res.second) {
        this->inEdges[v] = std::set<Edge>();
        this->outEdges[v] = std::set<Edge>();
    }
    return res.second;
}

bool Digraph::isDirected() {
    return true;
}

bool Digraph::removeVertex(const Node &v) {
    auto it = this->allVertices.find(v);
    if (it != this->allVertices.end()) {
        this->allVertices.erase(v);
        this->allEdges.erase(inEdges[v].begin(), inEdges[v].end());
        inEdges.erase(v);
        this->allEdges.erase(outEdges[v].begin(), outEdges[v].end());
        outEdges.erase(v);
        return true;
    }
    return false;
}

bool Digraph::addEdge(const Edge &e) {
    if (this->allVertices.find(e.source) == allVertices.end()) {
        throw std::runtime_error("No such source-vertex in this graph!");
    } else if (this->allVertices.find(e.target) == allVertices.end()) {
        throw std::runtime_error("No such target-vertex in this graph!");
    } else if (this->allEdges.insert(e).second) {
        this->inEdges[e.target].insert(e);
        this->outEdges[e.source].insert(e);
        return true;
    } else {
        return false;
    }
}

bool Digraph::addEdge(const Node &source, const Node &target) {
    return this->addEdge(Edge(source, Label(1), target));
}

bool Digraph::removeEdge(const Edge &e) {
    auto it = this->allEdges.find(e);
    if (it != this->allEdges.end()) {
        this->allEdges.erase(e);
        this->inEdges[e.target].erase(e);
        this->outEdges[e.source].erase(e);
        return true;
    }
    return false;
}

std::set<Edge> Digraph::removeEdges(const Node &source, const Node &target) {
    return {};
}

size_t Digraph::vertexCount() {
    return this->allVertices.size();
}

size_t Digraph::edgeCount() {
    return this->allEdges.size();
}

size_t Digraph::getInDegree(const Node &v) {
    auto it = this->allVertices.find(v);
    if (it == this->allVertices.end()) {
        throw std::runtime_error("No such vertex in this graph!");
    } else {
        return this->inEdges[v].size();
    };
}

size_t Digraph::getOutDegree(const Node &v) {
    auto it = this->allVertices.find(v);
    if (it == this->allVertices.end()) {
        throw std::runtime_error("No such vertex in this graph!");
    } else {
        return this->outEdges[v].size();
    };
}
