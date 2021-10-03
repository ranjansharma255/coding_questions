#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    vector<int> ::iterator it = v.begin();
    for (it = v.begin(); it != v.end(); ++it){
        cout << (*it) << endl;
    }
    // Iterators point to pairs
    vector<pair<int,int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>> :: iterator it;
    for (it = v_p.begin(); it != v_p.end(); ++it) {
        cout << (*it).first << " " << (*it).second << endl;
        //we can also write
        // cout << it->first << " " << it->second << endl;
        /*  
        -> when iterator is pointing to a pair then we can use arrow -> to get the pair value.
        -> (*it).first <=> (it->first) can use interchangeable.
        */
    }

    return 0;
}

/*
-> it + 1 takes to next location
-> it++ takes to next iterator
-> in vectors as the elements are in continuous order
   so it+1 and it++ works same.
-> but in maps and sets elements are not in continuous order 
-> so it++ will work and it+1 will give error.

Iterators in vectors are continuous
Iterators in maps and sets are discontinuous

*/