#include <bits/stdc++.h>
using namespace std;
 
void print(map<int, string> &m) {
	cout << m.size() << endl;
    // NlogN time complexity below.
	for (auto &pr : m) {
		cout << pr.first << " " << pr.second << endl;
	}
}

int main() {
    map<int, string> m; // maps store pairs
    m[1] = "abc"; // O(LogN) N - map current size
    m[5] = "cdc";
    m[3] = "acd";
    // writing m[6] itself consumes logN time.
    // why because already key is inserted and value is 
    // automatically decided depending upon the datatype default value
    m.insert({4, "afg"});
    auto it = m.find(3); // returns iterator if found otherwise return m.end().
    map<int, string> :: iterator it;
    for (it = m.begin(); it != m.end(); ++it) {
        cout << (*it).first << " " << (*it).second;
        //cout << it -> first << " " << it -> second;
    }

    for(auto &pr : m) {
        cout << pr.first << " " << pr.second;
        cout << endl;
    }
    /*
    output
    1 abc
    3 acd
    4 afg
    5 cdc
    */

    // find()
    auto it = m.find(3); // returns iterator if found
    //otherwise return m.end().
    if (it == m.end()) {
    	cout << "No value";
    } else {
    	cout << it -> first << " " << it -> second;
    }

    // erase
    m.erase(key);
    //while using iterator we should make a check
    if( it != m.end())
        m.erase(it);

    return 0;
}

/*
-> In maps values are stored in sorted order according to the key.
-> Maps are implemented by using Red Black Trees (Self Balancing Trees).
-> Maps are not in continous manner.
-> if keys are strings then they will be stored in lexographically increasing order.
-> map keys are unique.
-> insertion time complexity is logN
-> access time complexity is also LogN
*/