/*Q7) Write a Program to accept a directed graph G and compute the in-degree and out-degree of each vertex*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;
    
    vector<int> in_degree(vertices, 0), out_degree(vertices, 0);
    
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        out_degree[u]++;
        in_degree[v]++;
    }
    
    for (int i = 0; i < vertices; i++) {
        cout << "Vertex " << i << ": In-degree = " << in_degree[i] << ", Out-degree = " << out_degree[i] << endl;
    }
    
    return 0;
}
