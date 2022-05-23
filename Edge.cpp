//
// Created by ab on 5/18/22.
//

#include "Edge.h"

template<class V, class E>
Edge<V, E>::Edge(V src, E lbl, V trgt) {
    label = lbl;
    source = src;
    target = trgt;
}

template<class V, class E>
Edge<V, E> Edge<V, E>::reverse() {
    return Edge(target, label, source);
}
