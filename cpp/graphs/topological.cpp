#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using std::vector;
using std::unordered_map;
using std::unordered_set;
using std::reverse;

// Given a directed acyclical graph, return a valid
// topological ordering of the graph. 
vector<int> topologicalSort(vector<vector<int>>& edges, int n) {
    unordered_map<int, vector<int>> adj;
    for (int i = 1; i < n + 1; i++) {
        adj[i] = vector<int>();
    }
    for (vector<int> edge : edges) {
        int n1 = edge[0], n2 = edge[1];
        adj[n1].push_back(n2);
    }
    vector<int> topSort;
    unordered_set<int> visit;
    for (int i = 1; i < n + 1; i++) {
        dfs(i, adj, visit, topSort);
    }
    reverse(topSort.begin(), topSort.end());
    return topSort;
}

void dfs(int src, unordered_map<int, vector<int>>& adj,
    unordered_set<int>& visit, vector<int>& topSort) {
    if (visit.count(src) > 0) {
        return;
    }
    visit.insert(src);

    for (int neighbor : adj[src]) {
        dfs(neighbor, adj, visit, topSort);
    }
    topSort.push_back(src);
}

// Topological sort is used to "sort" directed, acyclical, connected graphs such that each node comes befores it dependent nodes
// i.e. you have a starter node, then print it and go to the neighbors and print it only all its parents have been printed/visited already

// therefore there are a lot of valid orders, only if you follow that sort method

// A simple example of this is university courses. There are some courses that can be taken without any pre-requisites and 
// then there are those that have pre-requisites, i.e. you cannot take them unless you have taken other courses first.

// In other words, some courses can be taken independent of other courses and others have to be taken in a specific order. 
// We can represent this scenario using a DAG, where the edges represent the dependencies between the courses.
