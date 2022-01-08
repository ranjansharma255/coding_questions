
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int V = 5;
		ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>(V);
		
		for (int i = 0; i < V; i++) {
			adj.add(new ArrayList<Integer>());
		}
		addEdge(adj, 0, 1);
		addEdge(adj, 0, 4);
		addEdge(adj, 1, 2);
		addEdge(adj, 1, 3);
		addEdge(adj, 1, 4);
		addEdge(adj, 2, 3);
		addEdge(adj, 3, 4);

		printGraph(adj);
	}

	static void addEdge(ArrayList<ArrayList<Integer>> adj, int u, int v) {
		adj.get(u).add(v);
		adj.get(v).add(u);
	}

	static void printGraph(ArrayList<ArrayList<Integer>> adj) {
		for(int i = 0; i < adj.size(); i++) {
			System.out.print("Vertex " + i);
			for(int j = 0; j < adj.get(i).size(); j++) {
				System.out.print(" -> " + adj.get(i).get(j));
			}
			System.out.println();
		}
	}
}

// output

/*
Vertex 0 -> 1 -> 4
Vertex 1 -> 0 -> 2 -> 3 -> 4
Vertex 2 -> 1 -> 3
Vertex 3 -> 1 -> 2 -> 4
Vertex 4 -> 0 -> 1 -> 3

*/