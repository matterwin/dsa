#include <iostream>
#include <list>
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

    // A recursive function used by DFS
    void DFSUtil(int v, vector<bool>& visited) {
        // Mark the current node as visited and print it
        visited[v] = true;
        cout << v << " ";

        // Recur for all the vertices adjacent to this vertex
        for (int n : adj[v]) {
            if (!visited[n])
                DFSUtil(n, visited);
        }
    }

    // The function to do DFS traversal. It uses recursive DFSUtil()
    void DFS(int v) {
        // Mark all the vertices as not visited (by default)
        vector<bool> visited(V, false);

        // Call the recursive helper function to print DFS traversal
        DFSUtil(v, visited);
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

    cout << "DFS starting from vertex 2:" << endl;
    g.DFS(2);

    return 0;
}

