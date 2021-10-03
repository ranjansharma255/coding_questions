
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
