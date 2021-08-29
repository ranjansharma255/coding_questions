//Time Complexity : O(n2)
#include <bits/stdc++.h>
using namespace std;

void pairFound(int arr[], int target, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if ( arr[i] + arr[j] == target) {
				cout << "Pair Found " << "( " << arr[i] << "," << arr[j] << " )" << endl;
				return;
			}
		}
	}
	cout << "Pair not found" << endl;
}

int main() {
	int arr[] = {8, 7, 2, 5, 3, 1};
	int size = sizeof(arr) / sizeof(int);
	int target = 10;
	pairFound(arr, target, size);
	return 0;
}
