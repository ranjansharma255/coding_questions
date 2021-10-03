https://leetcode.com/problems/remove-element/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
            return 0;
        vector<int> final;
        for(int i = 0; i < nums.size(); i++) {
          if(nums[i] != val) {
            final.push_back(nums[i]);
          }
        }
        nums = final;
        return nums.size();
    }
};
//Time Complexity: O(N) + O(N)
//Space Complexity: O(N)
