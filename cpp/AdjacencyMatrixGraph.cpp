#include <iostream>
using namespace std;

// directed graph representation using adjacency matrix.
const int N = 1e3 + 10;

int graph[N][N];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		int v1, v2;
		cin >> v1 >> v2;
		int wt;
		graph[v1][v2] = 1; // if weights are given then graph[v1][v2] = wt;
		graph[v2][v1] = 1;
		// in case of weighted graph rather than storing the connection value 1
		// store the weight of the graph
		// graph[v1][v2] = wt;
		// graph[v1][v2] = wt;
	}

	for (int i = 1 ; i < n; ++i) {
		for (int j = 1; j < n; ++j)
		{
			cout << graph[i][j];
		}
		cout << endl;
	}
	return 0;
}