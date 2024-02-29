#include <iostream>
#include <list>
#include <queue>
#include <vector>

using namespace std;

class Graph {
    int V; // Number of vertices
    vector<list<int>> adj; // Adjacency lists

public:
    // Constructor
    Graph(int v) : V(v), adj(v) {}

    // Function to add an edge into the graph
    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    // Prints BFS traversal from a given source s
    void BFS(int s) {
        // Mark all the vertices as not visited
        vector<bool> visited(V, false);

        // Create a queue for BFS
        queue<int> queue;

        // Mark the current node as visited and enqueue it
        visited[s] = true;
        queue.push(s);

        while (!queue.empty()) {
            // Dequeue a vertex from queue and print it
            s = queue.front();
            cout << s << " ";
            queue.pop();

            // Get all adjacent vertices of the dequeued vertex s
            // If an adjacent vertex has not been visited,
            // then mark it visited and enqueue it
            for (int n : adj[s]) {
                if (!visited[n]) {
                    visited[n] = true;
                    queue.push(n);
                }
            }
        }
    }
};

int main() {
    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "BFS starting from vertex 2:" << endl;
    g.BFS(2);

    return 0;
}

