https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

//Time Complexity: O(N)
//Space Complexity: O(1)
