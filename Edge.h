#ifndef TEST_EDGE_H
#define TEST_EDGE_H

#include "Node.h"

struct Label {
    int value;

    Label(int value) : value(value) {};

    bool operator<(const Label &t) const { return this->value < t.value; };

    Label &operator=(const Label &t) = default;
};

class Edge {


public:
    Label label;
    Node source;
    Node target;

    /**
     * Construct a new edge instance from the given source vertex to the given target vertex.
     * The label of this edge is also assigned by the given parameter.
     */

    Edge(const Node &src, const Label &lbl, const Node &trgt);

    /**
     * Returns a reversed version of this edge (swaps the source and target vertices).
     * This edge instance is not modified; instead a new instance is returned.
     */
    Edge reverse();

    bool operator<(const Edge &e) const;

    Edge &operator=(const Edge &t) = default;

};


#endif //TEST_EDGE_H
