#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m) {
	cout << "size is : ";
	cout << m.size() << endl;
	for (auto &pr : m) {
		cout << pr.first << " " << pr.second << endl;
	}
}
int main() {
    unordered_map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";
    print(m);
    
    return 0;
}

/*
-> Inbuild implementation is using HashTable
-> Time complexity O(1) avg.
-> find(), erase() also O(1)
-> Order is random.
-> Valid Keys Datatypes are
    

*/