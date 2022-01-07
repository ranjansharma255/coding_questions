// hacker earth problem
// for printing the connected component the code is slightly modified
// i.e when ever we call dfs we have to store all the vertex it is visiting in
// a vector then after the dfs is over for that vertex then we need to store that
// vector in another vector. so we use vector<vector>
#include <iostream>
#include <vector>
using namespace std;

const int N = 1e5 + 10;
bool visited[N];
vector<int> graph[N];
vector<vector<int>> cc;
vector<int> currentcc;
void dfs(int vertex) {
	visited[vertex] = true;
	currentcc.push_back(vertex);
	for (int child : graph[vertex]) {
		if (visited[child]) continue;
		dfs(child);
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	while (m--) {
		int v1, v2;
		cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	// printGraph();
	int cnt = 0; // cnt of connected components
	for (int i = 1; i <= n; ++i) {
		if (visited[i]) continue;
		currentcc.clear();
		dfs(i);
		cc.push_back(currentcc);
		cnt++;
	}
	cout << cc.size() << endl;
	for (auto c_cc : cc) {
		for (int vertex : c_cc) {
			cout << vertex << " ";
		}
		cout << endl;
	}
	return 0;
}