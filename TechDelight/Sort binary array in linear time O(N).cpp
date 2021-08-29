//Time Complexity: O(N)
// Space Complexity: O(1)
//Approach 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 1, 0, 1, 0, 1, 0, 0, 1 };
	int size = sizeof(arr) / sizeof(int);
	int cnt = 0;
	for (int i = 0 ; i < size; i++) {
		if(arr[i] == 0)
			cnt++;
	}

	for(int i = 0; i < size; i++) {
		if(cnt == 0)
			arr[i] = 1;
		else {
			arr[i] = 0;
			cnt--;
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

//Approach 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {0, 0, 1, 0, 1, 1, 0, 1, 0, 0};
	int size = sizeof(arr) / sizeof(int);
	int k = 0;
	for (int i = 0; i < size; i++) {
		if( arr[i] == 0)
			arr[k++] = 0;
	// when ever 0 is found then put it in the available index from the beginning which is maintained by k
	}
	for (int i = k; i < size; i++) {
		arr[i] = 1;
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
