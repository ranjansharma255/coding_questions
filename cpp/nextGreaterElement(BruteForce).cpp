#include <bits/stdc++.h>
using namespace std;

void nextGreaterElement(int arr[], int n) {
	int next;
	for (int i = 0 ; i < n; i++) {
		next = -1;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[i]) {
				next = arr[j];
				break;
			}
		}
		cout << next << " ";
	}
}

int main() {
	int arr[] = {11, 13, 21, 3};
	int size = sizeof(arr) / sizeof(arr[0]);
	nextGreaterElement(arr, size);
	return 0;
}