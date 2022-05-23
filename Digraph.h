#ifndef TEST_DIGRAPH_H
#define TEST_DIGRAPH_H


#include "Graph.h"
#include "Node.h"
#include "Edge.h"


class Digraph : public Graph<Node , Edge<int, int >> /*<Node, Edge<int, int >>*/ {
public:
    bool isDirected() override;

    bool addVertex(const Node& v) override;
//
/*    virtual bool removeVertex(V v);

    virtual bool addEdge(Edge<V, E> e);

    virtual bool addEdge(V source, V target);

    virtual bool removeEdge(Edge<V, E> e);

    virtual std::set<Edge<V, E>> removeEdges(V source, V target);

    virtual int vertexCount();

    virtual int edgeCount();

    virtual int getInDegree(V v);

    virtual int getOutDegree(V v);

    virtual std::set<Edge<V, E>> getEdgesWithLabel(E label);

    virtual bool containsEdge(Edge<V, E> e);

    virtual bool containsEdge(V src, V trg);

    virtual bool containsVertex(V v);

    virtual bool isConnected(); */
};


#endif //TEST_DIGRAPH_H
