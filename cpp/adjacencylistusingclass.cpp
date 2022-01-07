#include <iostream>
#include <list>
using namespace std;

class Graph {
	int V;
	//Array of list
	list<int> *l;
public:
	Graph(int V) {
		this->V = V;
		l = new list<int>[V];
	}

	void addEdge(int x, int y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void printAdjList() {
		for (int i = 0; i < V; i++) {
			cout << "Vertex " << i << " -> ";
			for (int x : l[i]) {
				cout << x << " ";
			}
			cout << endl;
		}
	}
};

int main() {
	int n, m;
	cin >> n >> m;
	Graph g(n + 1);
	for (int i = 0; i < m; ++i)
	{
		int x, y; cin >> x >> y;
		g.addEdge(x, y);
	}
	g.printAdjList();
	return 0;
}