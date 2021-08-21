// https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/
// That is increasing the start and end index with constant length if our element
// is not found in that interval. if the element is found then apply binary search in that interval
//
// Solution Steps
// 1.Initialize lower and upper index of the interval i.e. l = 0 , r = C
// 2.Compare the K with the value present at the upper index of the interval
// 3.if K > A[r] then copy the upper index in the lower index and increase the upper index by C. Keep on doing this until you reach a value that is greater than K.
// 4.If K < A[r], apply binary search in the interval from l to r
// 5.If found, return the index else return -1.


// Complexity Analysis
// Let i be the position of the element to be searched, then the number of iterations for
// finding upper index 'r' is equal to i/C in the worst case (Think).
//
// Hence time complexity = Finding the upper index 'r' of the interval + Binary Search in the
// interval from l to r = O(i/C) + O(logC) = O(i)
// Time Complexity: O(i)
// Space Complexity: O(1)

//Pseudo-Code
int search_infiniteArray( int A[], int K )
{
    int l = 0
    int r = C
    while (A[r] < K)
    {
       l = r
       r = r + C
    }
   return binarySearch(A, l, r, K)
}
