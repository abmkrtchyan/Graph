#include <set>
#include <map>
#include "Edge.h"

using namespace std;

template<class V, class E>
class Graph {
protected:
    std::set<V> allVertices;
    set<Edge<V, E>> allEdges;
    map<V, set<Edge<V, E>>> inEdges;
    map<V, set<Edge<V, E>>> outEdges;
public:
    /**
    * Check whether this graph is directed or not.
    */
    virtual bool isDirected() = 0;

    /**
      * Add the given vertex to this graph.
      *
      * @return true if the vertex is added, or
      *         false if such vertex is already in the graph.
      */
    virtual bool addVertex(const V& v) = 0;

    /**
     * Remove the given vertex from this graph.
     *
     * @return true if the vertex is removed, or
     *         false if no such vertex is in the graph.
     */
    virtual bool removeVertex(V v) = 0;

    /**
     * Add the given edge to this graph.
     * Both vertices (source and target) of the edge must be in the graph
     * otherwise, an exception is thrown indicating this issue.
     *
     * @return true if the edge is added, or
     *         false if the edge is already in the graph.
     */
    virtual bool addEdge(Edge<V, E> e) = 0;

    /**
     * Add an edge to this graph, connecting the given vertices.
     * If a new edge can be added, the label of this new edge will be 'null'.
     * Both vertices (source and target) of the edge must be in the graph
     * otherwise, an exception is thrown indicating this issue.
     *
     * @return true if a new edge is added, or
     *         false if such an edge is already in the graph.
     */
    virtual bool addEdge(V source, V target) = 0;

    /**
    * Remove the given edge from this graph.
    *
    * @return true if the vertex is removed, or
    *         false if no such vertex is in the graph.
    */

    virtual bool removeEdge(Edge<V, E> e) = 0;

    /**
     * Remove all edges in this graph between the given source vertex and target vertex.
     *
     * @return the set of edges removed from this graph as a result of this operation.
     */

    virtual std::set<Edge<V, E>> removeEdges(V source, V target) = 0;

    /**
     * Return the number of vertices in this graph.
     */
    virtual int vertexCount() = 0;

    /**
     * Return the number of edges in this graph.
     */
    virtual int edgeCount() = 0;

    /**
     * Return the count of incoming edges to the given vertex.
     */
    virtual int getInDegree(V v) = 0;

    /**
     * Return the count of outgoing edges from the given vertex.
     */
    virtual int getOutDegree(V v) = 0;

    /**
     * Return the set of edges with a label same as the given value.
     */
    virtual std::set<Edge<V, E>> getEdgesWithLabel(E label) = 0;

    /**
     * Check if this graph contains the given edge.
     */
    virtual bool containsEdge(Edge<V, E> e) = 0;

    /**
     * Check if this graph contains an edge between the given vertices.
     */
    virtual bool containsEdge(V src, V trg) = 0;

    /**
     * Check if this graph contains the given vertex.
     */
    virtual bool containsVertex(V v) = 0;

    /**
     * Check whether this graph is connected or not.
     * Connectivity is determined by a breadth-first-traversal starting from a random vertex.
     */
    virtual bool isConnected() = 0;
};