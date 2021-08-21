// https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/
// We can apply bottom up of binary search that is increasing the size exponentially and when ever
// we find that element may lie in the particular interval then we apply binary search.
// Pseudo-Code
int search_infiniteArray( int A[], int K )
{
    int l = 0
    int r = 1
    while (A[r] < K)
    {
       l = r
       r = 2*r
    }
   return binarySearch(A, l, r, K)
}
// Complexity Analysis
// Let i be the position of the element to be searched, then the number
//of iterations for finding upper index 'r' is equal to O(log i) in the worst case.
//Similarly, The total number of elements between l and r = O(i) (Think)

//Time complexity = finding uppar index 'r' of the interval + Binary Search
//from l to r = O(log i) + O(log i ) = O(log i)

//Space Complexity: O(1) if we use iterative binary search.

//Time Complexity: O(log(i)) == O(logN)
// Space Complexity: O(1)
//cpp Implementation
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int target, int start, int end) {
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (target > arr[mid]) {
			start = mid + 1;
		} else if (target < arr[mid]) {
			end = mid - 1;
		} else {
			return mid;
		}
	}
	return -1;
}

int ans(int arr[], int target) {
	int start = 0;
	int end = 1;
	while (target > arr[end]) {
		int temp = end + 1; // new start
		end = end + (end - start + 1) * 2;
		start = temp;
	}
	return binarySearch(arr, target, start, end);
}


int main() {
	int arr[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
	int target = 10;

	cout << ans(arr, target) << endl;


	return 0;
}


// Java Implementation

public class FindPositionElementInfiniteArray {
    public static void main(String[] args) {
        int[] arr = {3, 5, 7, 9, 10, 90, 100, 130,
                140, 160, 170};
        int target = 10;
        System.out.println(ans(arr, target));
    }
    static int ans(int[] arr, int target) {
        //first find the range
        // first start with a box of size 2
        int start = 0;
        int end = 1;

        // condition for the target to lie in the range
        // when the target element is greater than the end then
        // we basically need to increment the end exponentially(keep doubling)
        // when it is lesser, then we have found our interval and apply binary search
        while(target > arr[end]) {
            int temp = end + 1; //this is my new start
            end = end + (end - start + 1) * 2;
            start = temp;
        }
        return binarySearch(arr, target, start, end);

    }
    static int binarySearch(int[] arr, int target, int start, int end) {
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(target > arr[mid]) {
                start = mid + 1;
            } else if(target < arr[mid]) {
                end = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
}
