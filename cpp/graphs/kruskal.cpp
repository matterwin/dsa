#include <vector>
#include <unordered_map>
#include <utility>
#include <queue>

using std::vector;
using std::unordered_map;
using std::pair;
using std::tuple;
using std::get;
using std::make_tuple;
using std::make_pair;
using std::priority_queue;
using std::greater;


// Given a list of edges of a connected undirected graph,
// with nodes numbered from 1 to n,
// return a list edges making up the minimum spanning tree.
vector<pair<int, int>> mst(vector<vector<int>>& edges, int n) {
    unordered_map<int, vector<pair<int, int>>> adj;
    for (int i = 1; i < n + 1; i++) {
        adj[i] = vector<pair<int, int>>();
    }
    for (vector<int> edge : edges) {
        int n1 = edge[0], n2 = edge[1], weight = edge[2];
        adj[n1].push_back(make_pair(n2, weight));
        adj[n2].push_back(make_pair(n1, weight));
    }

    priority_queue<tuple<int,int, int>, vector<tuple<int,int, int>>, greater<tuple<int, int, int>>> minHeap; 
    for (vector<int> edge : edges) {
        int n1 = edge[0], n2 = edge[1], weight = edge[2];
        minHeap.push({weight, n1, n2});
    }
    
    UnionFind unionFind(n);
    vector<pair<int, int>> mst;
    while (mst.size() < n - 1) {
        tuple<int, int, int> cur = minHeap.top();
        minHeap.pop();
        int w1 = get<0>(cur), n1 = get<1>(cur), n2 = get<2>(cur);

        if (!unionFind.union(n1, n2)) {
            continue;
        }
        mst.push_back({n1, n2});
    }
    return mst;
}

