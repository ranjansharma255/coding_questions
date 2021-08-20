#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int size, int target) {
	int start = 0;
	int end = size - 1;
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (target < a[mid]) {
			end = mid - 1;
		} else if (target > a[mid]) {
			start = mid + 1;
		} else {
			return mid;
		}
	}
	return -1;
}
int main() {
	int arr[] = {2, 3, 4, 5, 15, 16, 20, 60, 100};
	int size = sizeof(arr) / sizeof(arr[0]);
	int target = 60;
	int ans = binarySearch(arr, size, target);
	cout << ans << endl;
	return 0;
}

// if we donot pass the size of the array in the binarySearch function
// and if we calculate the size of the array using sizeof() in the binarySearch function then it will give warning
// why because when we pass and array to a function then it loses its sense of how big it is.
