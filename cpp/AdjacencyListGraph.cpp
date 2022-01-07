#include <iostream>
#include <vector>
using namespace std;

const int N = 1e3 + 10;

// Array of vectors
// each index of the array "graph" stores a vector.
// index of the vector if the vertix if self.
// as it is global so all values to zero.

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> graph[n + 1];
	int v1, v2;
	for (int i = 0; i < m; ++i)
	{

		cin >> v1 >> v2;

		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	for (int i = 1 ; i < n; i++) {
		cout << i << " -> ";
		for (int j = 0; j < graph[i].size(); j++) {
			cout << graph[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
