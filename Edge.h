#ifndef TEST_EDGE_H
#define TEST_EDGE_H

template<class V, class E>
class Edge {
public:
    const E label;
    const V source;
    const V target;

    /**
     * Construct a new edge instance from the given source vertex to the given target vertex.
     * The label of this edge is also assigned by the given parameter.
     */

    Edge(V src, E lbl, V trgt);

    /**
     * Returns a reversed version of this edge (swaps the source and target vertices).
     * This edge instance is not modified; instead a new instance is returned.
     */
    Edge<V, E> reverse();

};


#endif //TEST_EDGE_H
