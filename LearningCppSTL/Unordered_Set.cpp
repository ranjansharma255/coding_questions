#include <iostream>
#include <unordered_set>
#define nline '\n'

using namespace std;

int main()
{
	unordered_set<int> s;
	s.insert(10);
	s.insert(12);
	for (auto it : s) {
		cout << it << nline;
	}
	
	if(s.find(10) == s.end()) {
		cout << "Not found" << nline;
	} else {
		cout << "Found" << nline;
	}
	
	cout << "size of the set is " << s.size();
	
	s.clear();
	
	return 0;
}
/*
Internal implementation of unordered set is HashTable.




*/