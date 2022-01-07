#include <iostream>
#include <vector>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool visited[N];

void dfs(int vertex) {
	// section 1
	// Take action on vertex after entering the vertex
	// if (visited[vertex]) return;
	cout << vertex << endl;
	visited[vertex] = true;
	// when ever we enter any vertex we have to visit it.

	for (int child : g[vertex]) {
		cout << "parent " << vertex << " child " << child << endl;
		if (visited[child]) continue; //we can  use line 11 or 16
		// section 2
		// Take action on child before entering the child node
		dfs(child);
		// section 3
		// Take action on child after exiting the child node
	}
	// section 4
	// Take action on vertex before exiting the vertex
}


int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0 ; i < 9; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	dfs(1);
	return 0;
}