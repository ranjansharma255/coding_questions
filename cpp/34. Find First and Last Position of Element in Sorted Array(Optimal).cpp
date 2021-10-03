// Time Complexity: O(N)
// Space Complexity: O(1)
// optimal approach is by using binary search
// here if we find the target in the array then there might be the possibility that
// more occurrences of the target can be on the left side of it and also on the right side of it.
// so for finding the first occurrence on the left hand side we take end = mid - 1;
// for finding the last occurrence on the right hand side we take start = mid + 1;
// cpp Implementation
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v = {-1,-1};
        // we can also do is
        // v[0] = search(nums, target, true);
        //if v[0] = -1 then the element doesn't exist and then we need not to find
        // the value of v[1] which is -1 by default
        // if(v[0] != -1){
        //   v[1] = search(nums, target, false);
        // }
        int start = search(nums, target, true);
        int end = search(nums, target, false);
        v[0] = start;
        v[1] = end;
        return v;
    }

    int search(vector<int> &nums, int target, bool firstStartIndex) {
        int ans = -1;
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(target < nums[mid]) {
                end = mid - 1;
            } else if(target > nums[mid]) {
                start = mid + 1;
            }else {
                ans = mid;
                if(firstStartIndex) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }

        }
        return ans;
    }
};