#include <vector>
#include <unordered_map>
#include <utility>
#include <queue>

using std::vector;
using std::unordered_map;
using std::pair;
using std::make_pair;
using std::priority_queue;
using std::greater;

unordered_map<int, int> shortestPath(vector<vector<int>>& edges, int n, int src) {
    unordered_map<int, vector<pair<int, int>>> adj;
    for (int i = 1; i < n + 1; i++) {
        adj[i] = vector<pair<int, int>>();
    }
    for (vector<int> edge : edges) {
        // s = src, d = dst, w = weight
        int s = edge[0], d = edge[1], w = edge[2];
        adj[s].push_back(make_pair(d, w));
    }

    unordered_map<int, int> shortest;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> minHeap; 
    minHeap.push({0, src});
    while (!minHeap.empty()) {
        pair<int, int> p = minHeap.top();
        minHeap.pop();
        int w1 = p.first, n1 = p.second;

        if (shortest.count(n1) > 0) {
            continue;
        }
        shortest[n1] = w1;
        for (pair<int, int> p : adj[n1]) {
            int n2 = p.first, w2 = p.second;
            if (shortest.count(n2) == 0) {
                minHeap.push({w1 + w2, n2});
            }
        }
    }
    return shortest;
}


// Used to find the shortest path of a non-negative weighted, directed or undirected, 
//  cyclic or acyclic, connected graph

// Dijkstra uses BFS

// Time Complexity
// The time complexity for this algorithm can be written as O(E logE), where E is the number of edges. 
// Recall that in the worst case, each vertex is connected to the other, i.e. V^2 

// In the worst case, we might have every single edge inside of our heap. 
// Since insertion and removal from a heap is logn, this gives us a total of O(E logE).

// HashMap for adj matrix
// Initialize it for each node gets a set of neighbors and their weights
// Use a MinHeap/PriorityQueue to keep track of the minimal weights wrt to the path weight
// HashMap for our MST
// Start at the starter node
// While our minHeap is not empty, get the smallest weight and if the destination node 
//  has already been visited, then skip it.
//  Else, add it to hashMap, and for each neighbor of the new destination node, add its weight
//  plus the weight of the current path to the minHeap for the neighbors new weight, Since
//  that is how Dijkstra's algorithm works if you remember
//


// Dijkstra's Algorithm:

// Pros:

// Efficiency: Efficiently finds the shortest path from a single source to all other vertices in non-negative weighted graphs.
// Simplicity: Conceptually simpler compared to some other shortest path algorithms like Bellman-Ford.
// Optimality: Provides optimal solutions for non-negative edge weights, ensuring the shortest path.
// Priority Queue Optimization: Can be optimized with a priority queue data structure for faster execution.
// Applications: Widely used in various applications such as network routing protocols and GPS navigation systems.


// Cons:

// Limited Applicability: Does not handle negative weight edges, thus not suitable for graphs with negative weights.
// Single Source: Computes shortest paths from only one source vertex, unlike algorithms like Floyd-Warshall which compute all pairs.
// Time Complexity: While efficient for single-source shortest paths, its time complexity increases when applied to graphs with many vertices and edges.
// Greedy Nature: Relies on the assumption that each shortest path examined is indeed the shortest, which may not hold in some cases, leading to suboptimal solutions.
// Shortcomings in Dense Graphs: In dense graphs, Dijkstra's algorithm can be less efficient due to the overhead of maintaining the priority queue.
