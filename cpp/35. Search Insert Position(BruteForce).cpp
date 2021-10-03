https://leetcode.com/problems/search-insert-position/

// Iterate over every element of the array nums[] and search for integer target.
// If any array element is found to be equal to target, then print index of target.
// Otherwise, if any array element is found to be greater than target, print that index as the insert position of target.
// If no element is found to be exceeding target, target must be inserted after the last array element.
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target)
                return i;
            else if(nums[i] > target)
                return i;
        }
        return nums.size();
    }
};

//Time Complexity: O(N)
//Space Complexity: O(1)
