//cpp implementation
#include <bits/stdc++.h>
using namespace std;

int orderAgnosticBS(int arr[], int size, int target) {
	int start = 0;
	int end = size - 1;

	bool isAsc = arr[start] < arr[end];

	//This below code can also be written in another convention specified above
	/*if (arr[start] < arr[end]) {
		isAsc = true;
	} else {
		isAsc = false;
	}*/
	while (start <= end) {
		int mid = start + (end - start) / 2;

		//common functionality taking out
		if (target == arr[mid]) {
			return mid;
		}

		if (isAsc) {
			if (target < arr[mid]) {
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		} else {
			if (target > arr[mid]) {
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
	}
	return -1;
}

int main() {
	int arr[] = { -18, -12, -4, 0, 2, 3, 4, 5, 15, 16, 20, 60, 100}; // ascending orders
	// int arr[] = {99, 80, 75, 22, 11, 10, 5, 2, -3}; // descending order
	int size = sizeof(arr) / sizeof(arr[0]);
	int target = 20;
	int ans = orderAgnosticBS(arr, size, target);
	cout << ans;
	return 0;
}


