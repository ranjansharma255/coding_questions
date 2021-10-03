https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        if(target < nums[0]) return 0;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target)
                return mid;
            else if(target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};

//Time Complexity: O(LogN)
//Space Complexity: O(1)
