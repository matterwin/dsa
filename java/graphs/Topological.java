import java.util.Set; 
import java.util.HashSet; 
import java.util.Map; 
import java.util.HashMap; 
import java.util.List; 
import java.util.ArrayList; 
import java.util.Collections; 

// Given a directed acyclical graph, return a valid 
// topological ordering of the graph. 
public class TopologicalSort { 
    public static List<Integer> topologicalSort(int[][] edges, int n) {
        Map<Integer, ArrayList<Integer>> adj = new HashMap<>(); 
        for (int i = 1; i < n + 1; i++) {
            adj.put(i, new ArrayList<>()); 
        } 
        for (int[] edge : edges) { 
            int src = edge[0], dst = edge[1]; 
            adj.get(src).add(dst); 
        } 
        List<Integer> topSort = new ArrayList<>(); 
        Set<Integer> visit = new HashSet<>(); 
        for (int i = 1; i < n + 1; i++) { 
            dfs(i, adj, visit, topSort); 
        } 
        Collections.reverse(topSort); 
        return topSort; 
    } 
    
    public static void dfs(int src, Map<Integer, ArrayList<Integer>> adj, Set<Integer> visit, List<Integer> topSort) { 
        if (visit.contains(src)) {
            return; 
        } 
        visit.add(src); 
        for (int neighbor : adj.get(src)) {
            dfs(neighbor, adj, visit, topSort); 
        } 
        topSort.add(src); 
        return; 
    } 
}    

// Topological sort is used to "sort" directed, acyclical, connected graphs such that each node comes befores it dependent nodes
// i.e. you have a starter node, then print it and go to the neighbors and print it only all its parents have been printed/visited already

// therefore there are a lot of valid orders, only if you follow that sort method

// A simple example of this is university courses. There are some courses that can be taken without any pre-requisites and 
// then there are those that have pre-requisites, i.e. you cannot take them unless you have taken other courses first.

// In other words, some courses can be taken independent of other courses and others have to be taken in a specific order. 
// We can represent this scenario using a DAG, where the edges represent the dependencies between the courses.

// Create an adj list/matrix
// perform dfs for each vertex, and only visit the dfs node if it hasn't been visited already
// add it to the topSort list, and this makes the list become backwards
// after we are done with dfs, reverse the list, then the result is the in order approach of all the nodes i.e. parent comes first, then neighbor
