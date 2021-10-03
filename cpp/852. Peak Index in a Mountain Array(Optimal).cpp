https://leetcode.com/problems/peak-index-in-a-mountain-array/

// Time complexity : O(logN)
// Space Complexity: O(1)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        while(start < end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] > arr[mid + 1]) {
                // we are in the decreasing part of the array
                // we need to search to the left.
                end = mid;
            }
            else {
                // we are in the increasing part of the array
                start = mid + 1;
            }
        }
        return start; // or we can return end too
    }
};

