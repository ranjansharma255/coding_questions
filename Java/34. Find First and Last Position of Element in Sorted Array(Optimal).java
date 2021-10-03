https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

// Java Implementation
class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ans = {-1, -1};
        // check for first occurrence of target first;
        int start = search(nums, target, true);
        int end = search(nums, target, false);
        ans[0] = start;
        ans[1] = end;
        return ans;
    }
    //this function  just returns the index value of target
    int search(int[] nums, int target, boolean findStartIndex) {
        int ans = -1;
        int start = 0;
        int end = nums.length - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(target < nums[mid]) {
                end = mid - 1;
            }
            else if(target > nums[mid]) {
                start = mid + 1;
            } else {
                //potential ans is found
                ans = mid;
                if(findStartIndex) {
                    end = mid - 1;
                    // we are finding the first occurrence on the left hand
                    //side of the target.
                } else {
                    start = mid + 1;
                    // we are finding the last occurrence on
                    //right side of the target.
                }
            }
        }
        return ans;
    }
}
