https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

// Java Implementation
class Solution {
    public int[] searchRange(int[] nums, int target) {
        int first = -1, last = -1;
        for(int i = 0; i < nums.length; i++) {
            if(target != nums[i]) {
                continue;
            }

            if(first == -1) {
                first = i;
            }
            last = i;
        }
        return new int[] {first,last}; // we are returnin the array of object type
    }
}