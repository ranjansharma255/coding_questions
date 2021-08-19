//If we find any value other than given value then we shift it to the validSize index making it valid element. Hence removing the occurrence of the given element value;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
            return 0;
        int validSize = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[validSize] = nums[i];
                validSize++;
            }
        }
        return validSize;
    }
};
//Time Complexity: O(N)
//Space Complexity: O(1)
