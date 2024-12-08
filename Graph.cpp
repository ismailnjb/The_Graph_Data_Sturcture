#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Graph {
public:
    unordered_map<int, vector<int>> adjList;

    // Add an edge from node u to node v
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);  // For undirected graph
    }

    // Print the graph
    void printGraph() {
        for (const auto& pair : adjList) {
            cout << pair.first << ": ";
            for (int neighbor : pair.second) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

// Example usage
int main() {
    Graph graph;
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);

    graph.printGraph();
    return 0;
}
