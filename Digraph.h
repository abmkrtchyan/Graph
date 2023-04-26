#ifndef DIGRAPH_H
#define DIGRAPH_H


#include <stack>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include "Graph.h"
#include "Node.h"
#include "Edge.h"
#include "HashFunctions.h"


class Digraph : public Graph<Node> {
public:

    bool isDirected() override;

    bool addVertex(const Node &v) override;

    bool removeVertex(const Node &v) override;

    bool addEdge(const Edge &e) override;

    bool addEdge(const Node &source, const Node &target) override;

    bool removeEdge(const Edge &e) override;

    std::vector<Edge> removeEdges(const Node &source, const Node &target) override;

    size_t vertexCount() override;

    size_t edgeCount() override;

    size_t getInDegree(const Node &v) override;

    size_t getOutDegree(const Node &v) override;

    bool containsEdge(const Edge &e) override;

    bool containsVertex(const Node &v) override;

    void DFS() override;

    std::vector<Node> topologicalSort() override;

    /*  virtual std::set<Edge<V, E>> getEdgesWithLabel(E label);

      virtual bool containsEdge(V src, V trg);

      virtual bool isConnected(); */
private:
    void dfsVisit(Node &node, int &time);
};


#endif //DIGRAPH_H
