// Java program for Floyd Warshall All Pairs Shortest
// Path algorithm.
import java.io.*;
import java.lang.*;
import java.util.*;

class AllPairShortestPath {
	final static int INF = 99999, V = 4;

	void floydWarshall(int dist[][])
	{

		int i, j, k;

		/* Add all vertices one by one
		to the set of intermediate
		vertices.
		---> Before start of an iteration,
			we have shortest
			distances between all pairs
			of vertices such that
			the shortest distances consider
			only the vertices in
			set {0, 1, 2, .. k-1} as
			intermediate vertices.
		----> After the end of an iteration,
				vertex no. k is added
				to the set of intermediate
				vertices and the set
				becomes {0, 1, 2, .. k} */
		for (k = 0; k < V; k++) {
			// Pick all vertices as source one by one
			for (i = 0; i < V; i++) {
				// Pick all vertices as destination for the
				// above picked source
				for (j = 0; j < V; j++) {
					// If vertex k is on the shortest path
					// from i to j, then update the value of
					// dist[i][j]
					if (dist[i][k] + dist[k][j]
						< dist[i][j])
						dist[i][j]
							= dist[i][k] + dist[k][j];
				}
			}
		}

		// Print the shortest distance matrix
		printSolution(dist);
	}

	void printSolution(int dist[][])
	{
		System.out.println(
			"The following matrix shows the shortest "
			+ "distances between every pair of vertices");
		for (int i = 0; i < V; ++i) {
			for (int j = 0; j < V; ++j) {
				if (dist[i][j] == INF)
					System.out.print("INF ");
				else
					System.out.print(dist[i][j] + " ");
			}
			System.out.println();
		}
	}

	// Driver's code
	public static void main(String[] args)
	{
		/* Let us create the following weighted graph
		10
		(0)------->(3)
		|		 /|\
		5 |		 |
		|		 | 1
		\|/		 |
		(1)------->(2)
		3		 */
		int graph[][] = { { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 } };
		AllPairShortestPath a = new AllPairShortestPath();

		// Function call
		a.floydWarshall(graph);
	}
}

// Contributed by Aakash Hasija

// The Floyd-Warshall algorithm, named after its creators Robert Floyd and Stephen Warshall, is a fundamental algorithm in computer science 
// and graph theory. 
// It is used to find the shortest paths between all pairs of nodes in a weighted graph. 
// This algorithm is highly efficient and can handle graphs with both positive and negative edge weights, 
// making it a versatile tool for solving a wide range of network and connectivity problems.

// The Floyd Warshall Algorithm is an all pair shortest path algorithm unlike Dijkstra and Bellman Ford 
// which are single source shortest path algorithms. 
// This algorithm works for both the directed and undirected weighted graphs. 
// But, it does not work for the graphs with negative cycles (where the sum of the edges in a cycle is negative). 

// It follows Dynamic Programming approach to check every possible path going via every possible node in order 
// to calculate shortest distance between every pair of nodes.

// Use floydWarshall's algorithm for finding the shorest path for every pair of vertices



// Floyd-Warshall Algorithm:

// Pros:

// Efficient: Finds shortest paths between all pairs of nodes in a graph.
// Versatile: Handles graphs with both positive and negative edge weights.
// All-Pairs: Unlike Dijkstra and Bellman-Ford, it computes all pair shortest paths.


// Cons:
//
// Complexity: Time complexity is cubic, Θ(V^3), which can be inefficient for large graphs.
// Negative Cycles: Doesn't work for graphs with negative cycles, limiting its applicability.


// remember the forumla A^kth[i,j] = min{A^(k-1)th[i,j], A^(k-1)[i,k] + A^(k-1)[k,j]}
// the ^k part just means the kth matrix i.e. the shorest path matrix for vertex k
