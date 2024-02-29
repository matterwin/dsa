import java.util.List;
import java.util.ArrayList;
import java.util.Queue;
import java.util.PriorityQueue;

public class Kruskal {
    // Given an list of edges of a connected undirected graph,
    // with nodes numbered from 1 to n,
    // return a list edges making up the minimum spanning tree.
    public static List<Integer[]> mst(int[][] edges, int n) {
        Queue<int[]> minHeap = new PriorityQueue<>((n1, n2) -> (n1[0] - n2[0]));
        for (int[] edge : edges) {
            int n1 = edge[0], n2 = edge[1], weight = edge[2];
            minHeap.add(new int[]{weight, n1, n2});
        }

        UnionFind unionFind = new UnionFind(n);
        List<Integer[]> mst = new ArrayList<>();
        while(mst.size() < n - 1){
            int[] cur = minHeap.remove();
            int w1 = cur[0], n1 = cur[1], n2 = cur[2];
            if (unionFind.union(n1, n2) == false) {
                continue;
            }
            mst.add(new Integer[]{n1, n2});
        }
        return mst;
    }
}

// Also used to find MST (Minimum Spanning Tree)
// Instead of starting an any vertex like in Prim's, where just take in all the 
// edges of the graph, and keep adding the lowest edge to the MST

// Time Complexity
// The difference between Kruska'ls and Prim's is that in Kruskal's, 
// we are using the Union-Find data structure. 
//
// Still, we are making use of a min-heap which gives us E edges to add 
// in the worst case. 
// To add/remove, the heap takes O(log(V^2)) time, which can be reduced to 
// 2O(logV), using the log power rule. 
//
// This gives us a total time complexity of O(E logV), where V is the number of vertices.
//
// The memory complexity will be 
// O(E), where E is the number of edges.
