// time complexity : O(nlogn)
// by sorting the array in ascending order and printing the last second element
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {10, 5, 10};
	int size = sizeof(arr) / sizeof(int);

	sort(arr, arr + size);

	//5 10 10
	int flag = 0;
	for(int i = size - 2; i >= 0; i--) {
		if(arr[i] != arr[size - 1]) // if element is not equal to largest element
		{
			cout << arr[i] << endl;
			flag = 1;
		}
	}
	if(flag == 0)
		cout << "No second largest element" << endl;
	return 0;
}



// time complexity : O(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { -8, 10, 6, 19, 2, -16};
	int size = sizeof(arr) / sizeof(int);

	int largest = INT_MIN;
	int secondLargest = INT_MIN;
	for (int i = 0 ; i < size; i++) {
		if( arr[i] > largest) {
			secondLargest =	largest;
			largest = arr[i];
		} else if(arr[i] < largest && arr[i] > secondLargest) // or else if(arr[i] > secondLargest)
    {
			secondLargest = arr[i];
		}
	}
	if(secondLargest == INT_MIN)
		cout << "No second largest element";
	else
		cout << secondLargest << endl;
	return 0;
}


// 2 Approach: The approach is to traverse the array twice.
// In the first traversal find the maximum element.
// In the second traversal find the greatest element in the remaining excluding the previous greatest.
// time complexity : O(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {12, 35, 1, 10, 34, 1};
	int size = sizeof(arr) / sizeof(int);
	int largest = arr[0], slargest = -1;

	for(int i = 0; i < size; i++) {
		if(arr[i] > largest)
			largest = arr[i];
	}

	for(int i = 0; i < size; i++) {
		if(arr[i] != largest) {
			if(slargest == -1)
				slargest = arr[i];
			else if(arr[i] > slargest)
				slargest = arr[i];
		}
	}
	cout << largest << endl;
	if(slargest == -1)
		cout << "No second largest element";
	else {
		cout << slargest << endl;
	}
	return 0;
}
