#include <algorithm>
#include <iostream>
#include "Digraph.h"

using namespace std;

int main() {
    Digraph graph{};
    graph.addVertex(5);
    graph.addVertex(6);
    graph.addVertex(7);
    graph.addVertex(8);
    graph.addVertex(9);
    graph.addVertex(0);
    graph.removeVertex(7);
    graph.addEdge(5,6);
    graph.addEdge(0,5);
    graph.addEdge(8,9);

    std::cout<<graph.containsVertex(7)<<std::endl;
    std::cout<<graph.containsVertex(6)<<std::endl;
    std::cout<<graph.containsVertex(5)<<std::endl;

    return 0;
}
