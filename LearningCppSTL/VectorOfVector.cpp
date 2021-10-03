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
	vector<vector<int>> v;
	for (int i = 0; i < N; ++i) {
		int n;
		cin >> n; 
        vector<int> temp; //creating temp vector and taking the values and pushing
		for (int j = 0; j < n; ++j) {
			int x;
			cin >> x;
			temp.push_back(x);
		}
        v.push_back(temp); // v vector storing a temp vector
	}
	v[0].push_back(10);
	v.push_back(vector<int> ());
	v[3].push_back(12);
	for(int i = 0; i < v.size(); ++i) {
		printVec(v[i]);
	}
	return 0;
}
/*
for (int i = 0; i < N; ++i) {
		int n;
		cin >> n;
        v.push_back(vector<int> ()); //pushing the vector and the taking input of the values
		for (int j = 0; j < n; ++j) {
			int x;
			cin >> x;
            v[i].push_back(x);
		}
        v.push_back(temp); // v vector storing a temp vector
	}

*/

/*
Input 
3
3
1 2 3
3
3 4 5
2
1 2

size: 4
1 2 3 10 
size: 3
3 4 5 
size: 2
1 2 
size: 1
12 

*/