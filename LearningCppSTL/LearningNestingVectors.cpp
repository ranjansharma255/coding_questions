#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

void printVec(vector<pair<int,int>> &v){
	cout << "size: " << v.size() << nline;
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i].first << " "<< v[i].second << " ";
	}
	cout << nline;
}
int main()
{
	vector<pair<int,int>> v;
	printVec(v);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x,y)); // or v.push_back({x, y})
	}
	printVec(v);
	return 0;
}

/*

Input
3
1 2
3 4
5 6

Output
size: 0

size: 3
1 2 3 4 5 6 

*/
