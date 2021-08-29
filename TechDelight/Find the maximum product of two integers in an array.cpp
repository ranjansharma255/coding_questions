//Time Complexity: O(N2)
//Space Complexity: O(1)
 // approach 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { -10, -3, 5, 6, -2 };
	int size = sizeof(arr) / sizeof(int);
	int max_i, max_j;
	int maxProduct = INT_MIN;
	int product;
	for(int i = 0; i < size; i++) {
		product = 1;
		for(int j = i + 1; j < size; j++) {
			product = arr[i] * arr[j];
			if(product > maxProduct) {
				maxProduct = product;
				max_i = i;
				max_j = j;
			}
		}
	}
	cout << maxProduct << endl;
	cout << max_i << " " << max_j;
	return 0;
}

// approach 2
// time complexity : O(nlogn)
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { -8, 10, 6, 19, 2, -16};
	int size = sizeof(arr) / sizeof(int);

	sort(arr, arr + size); //O(nlogn)

	if( arr[size - 1] * arr[size - 2] > arr[0] * arr[1])
		cout << arr[size - 1] << "," << arr[size - 2];
	else {
		cout << arr[0] << "," << arr[1];
	}
	return 0;
}
