//
// Created by ab on 5/18/22.
//

#include "Digraph.h"

//template<class V, class E>
/*bool Digraph<V, E>::isDirected() {
    return true;
}*/

bool Digraph::addVertex(const Node& v) {
    auto res = this->allVertices.insert(v);
    return res.second;
}

//template<class V, class E>
//bool Digraph<V, E>::removeVertex(V v) {
//    //
//}
//
//template<class V, class E>
//bool Digraph<V, E>::addEdge(Edge<V, E> e) {
//    //
//}
//
//template<class V, class E>
//bool Digraph<V, E>::addEdge(V source, V target) {
//    //
//}
//
//template<class V, class E>
//bool Digraph<V, E>::removeEdge(Edge<V, E> e) {
//    //
//}
//
//template<class V, class E>
//set<Edge<V, E>> Digraph<V, E>::removeEdges(V source, V target) {
//    //
//}
//
//template<class V, class E>
//int Digraph<V, E>::vertexCount() {
//    //
//}
//
//template<class V, class E>
//int Digraph<V, E>::edgeCount() {
//    //
//}
//
//template<class V, class E>
//int Digraph<V, E>::getInDegree(V v) {
//    //
//}
//
//template<class V, class E>
//int Digraph<V, E>::getOutDegree(V v) {
//    //
//}
//
//template<class V, class E>
//set<Edge<V, E>> Digraph<V, E>::getEdgesWithLabel(E label) {
//    //
//}
//
//template<class V, class E>
//bool Digraph<V, E>::containsEdge(Edge<V, E> e) {
//    //
//}
//
//template<class V, class E>
//bool Digraph<V, E>::containsEdge(V src, V trg) {
//    //
//}
//
//template<class V, class E>
//bool Digraph<V, E>::containsVertex(V v) {
//    //
//}
//
//template<class V, class E>
//bool Digraph<V, E>::isConnected() {
//    //
//}
