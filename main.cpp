#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <limits>

#define MAX 101
using namespace std;

enum colors {
    BLACK, WHITE, GRAY
};
int color[MAX], d[MAX], p[MAX], f[MAX], t, vertex, edge;
int NIL = numeric_limits<int>::min();

void DFS(vector<int>[]);

void DFS_VISIT(vector<int>[], int);

int main() {
    //freopen("dfs.txt", "r", stdin);
    vector<int> adjList[MAX];
    int u, v;
    cin >> vertex >> edge;
    for (int e = 1; e <= edge; e++) {
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    DFS(adjList);
    for (int v = 1; v <= vertex; v++) {
        printf("v%d (%d/%d)\n", v, d[v], f[v]);
    }
    return 0;
}

void DFS(vector<int> G[]) {
    for (int u = 0; u <= vertex; u++) {
        color[u] = WHITE;
        p[u] = NIL;
    }
    t = 0;
    for (int u = 1; u <= vertex; u++) {
        if (color[u] == WHITE) {
            DFS_VISIT(G, u);
        }
    }
}

void DFS_VISIT(vector<int> G[], int u) {
    t = t + 1;
    d[u] = t;
    color[u] = GRAY;
    for (int v = 0; v < G[u].size(); v++) {
        if (color[G[u][v]] == WHITE) {
            p[G[u][v]] = u;
            DFS_VISIT(G, G[u][v]);
        }
    }
    color[u] = BLACK;
    t = t + 1;
    f[u] = t;
}