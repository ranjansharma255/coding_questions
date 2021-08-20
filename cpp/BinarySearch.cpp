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

// to solve this easiest way is to have a parameter size in the function call

// java implementation
package com.company;

public class BinarySearch {
    public static void main(String[] args) {
        int[] arr = {2, 3, 4, 5, 15, 16, 20, 60, 100};
        int target = 10;
        int ans = binarySearch(arr, target);
        System.out.println(ans);
    }

    static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        while(start <= end) {
            //find the middle element
            int mid = (start + end) / 2;

            if(target < arr[mid]) {
                end = mid - 1;
            } else if(target > arr[mid]) {
                start = mid + 1;
            } else {
                // ans found
                return mid;
            }
        }
        return -1;
    }
}
