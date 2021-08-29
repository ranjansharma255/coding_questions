//Time Complexity : O(nlogn)
#include <bits/stdc++.h>
using namespace std;

void pairFound(int arr[], int target, int size)
{
	sort(arr, arr + size);
	int low = 0;
	int high = size - 1;
	while (low < high)
	{
		if (arr[low] + arr[high] == target)
		{
			cout << "Pair Found " << arr[low] << "," << arr[high];
			return;
		}

		(arr[low] + arr[high] > target) ? high-- : low++;
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
