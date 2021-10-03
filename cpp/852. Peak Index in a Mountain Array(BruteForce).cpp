https://leetcode.com/problems/peak-index-in-a-mountain-array/

// Time complexity : O(N)
// Space Complexity: O(1)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int index;
        int maxelement = arr[0];
        for (int i = 0; i < arr.size(); i++) {
            if(arr[i] > maxelement){
                maxelement = arr[i];
                index = i;
            }
        }
        return index;
    }

};
