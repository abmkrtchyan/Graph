#include <algorithm>
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

    return 0;
}
