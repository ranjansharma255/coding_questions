#include <bits/stdc++.h>
using namespace std;

#define nline '\n'

void printVec(vector<int> &v){
	cout << "size: " << v.size() << nline;
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << nline;
}
int main()
{
	int N; //how many number of vectors
	cin >> N;
	vector<int> v[N];
	for (int i = 0; i < N; ++i) {
		int n;
		cin >> n;
		for (int j = 0; j < n; ++j) {
			int x;
			cin >> x;
			v[i].push_back(x);    // ith vector
		}
	}
	
	for(int i = 0; i < N; ++i) {
		printVec(v[i]);
	}
	return 0;
}

/*
Input 
3
3
1 2 3
3
3 4 5
2
1 2

Output
size: 3
1 2 3 
size: 3
3 4 5 
size: 2
1 2 


-> Drawback of arrays are they are of fixed size
-> Due to which v[N] is fixed;
-> And I want to make this  v[N] also dynamic so I can use vector of vector
-> vector<int> v[N]; this is basically a 2D array
-> v[0][0] will give us 0th vector 0th element i.e 1
-> This is behaving like a 2D array in which the number of rows (vectors) are 
-> fixed but columns (every vector) is dynamic.
-> To make number of rows and columns also dynamic we use vector of vector.
*/