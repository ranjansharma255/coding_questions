https://leetcode.com/problems/find-peak-element/

class Solution {
    public int findPeakElement(int[] nums) {
        int index = 0;
        if(nums.length == 1) // if one element if present
            return 0;
        if(nums[nums.length - 1] >= nums[nums.length - 2]) {
            return nums.length - 1;
        }
        if(nums[0] >= nums[1]){
            return 0;
        }
        for(int i = 1; i <= nums.length - 2; i++) {
            if( nums[i] >= nums[i + 1] && nums[i] >= nums[i - 1]) {
                index = i;
            }
        }
        return index;
    }
}