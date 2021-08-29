//Time Complexity : O(N)
//Space Complexity : O(N);
#include <bits/stdc++.h>
using namespace std;

void pairFound(int arr[], int target, int size)
{
	unordered_set<int> s;
	for (int i = 0; i < size; i++)  {
		if(s.find(target - arr[i]) != s.end()) {
			cout << "Pair Found " << arr[i] << "," << target - arr[i];
			return;
		}
		else {
			s.insert(arr[i]);
		}
	}
	cout << "pair not found" << endl;
}

int main()
{
	int arr[] = { 8, 7, 2, 5, 3, 1 };
	int size = sizeof(arr) / sizeof(int);
	int target = 10;
	pairFound(arr, target, size);
	return 0;
}
