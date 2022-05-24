//
// Created by ab on 5/18/22.
//

#include "Edge.h"

Edge::Edge(const Node &src, const Label &lbl, const Node &trgt) :
        label(lbl),
        source(src),
        target(trgt) {}

Edge Edge::reverse() {
    return Edge(target, label, source);
}

bool Edge::operator<(const Edge &e) const {
    return this->label < e.label;
}

