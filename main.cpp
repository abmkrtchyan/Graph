#include <iostream>
#include <unordered_set>
#include "Node.h"
#include "HashFunctions.h"
#include "Digraph.h"

using namespace std;

int main() {
    std::unordered_set<Node, HashFunction> myset;
    myset.insert(Node(9));
    Digraph graph{};
    graph.addVertex(5);
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);
    graph.addVertex(4);
    graph.addVertex(6);
    graph.addVertex(7);
    graph.addVertex(0);

    graph.removeVertex(7);

    graph.addEdge(5, 2);
    graph.addEdge(5, 0);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);

    std::cout << graph.containsVertex(7) << std::endl;
    std::cout << graph.containsVertex(6) << std::endl;
    std::cout << graph.containsVertex(5) << std::endl;

    for (const auto &vertex: graph.topologicalSort())
        std::cout << vertex.getData() << " ";


    return 0;
}
