#include <bits/stdc++.h>
using namespace std;
// auto keyword, range based loop are in c++ 11 version and after
int main() {

    vector<int> v =  {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> :: iterator it;
    for ( it = v.begin(); it != v.end(); ++it) {
        cout << (*it) << endl;
    }
    vector<pair<int, int>> vp = {{1, 2}, {2, 3}};
    for (pair<int, int> &value : vp) {
    	cout << value.first << " " << value.second << endl;
    }

    for (auto &value : vp) {
    	cout << value.first << " " << value.second << endl;
    }
    // to get the actual value we use references.
    for (int &value : v) {
		value++;
	}
    for (int value : v) {
    	cout << value << " ";
    }

    return 0;
}