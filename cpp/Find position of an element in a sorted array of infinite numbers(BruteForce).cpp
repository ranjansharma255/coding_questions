// https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/
// Time Complexity: O(N)
// Space Complexity: O(1)
//Approach is to start searching for target linearly from 0 index untill you find and element
// equal to target then return index, if you find an element greater than target, then return -1
#include <bits/stdc++.h>
using namespace std;
int findPosition(int arr[], int target) {
	int i = 0;
	while (arr[i] <= target) {
		if (arr[i] == target)
			return i;
		else {
			i++;
		}
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; cin >> a[i++]);
	int target = 30;
	int ans = findPosition(a, target);
	cout << ans << endl;
	return 0;
}
