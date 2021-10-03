https://leetcode.com/problems/maximum-product-subarray/

//Time Complexity: O(N)
//Space Complexity: O(1)
Approach is
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minvalue = nums[0];
        int maxvalue = nums[0];
        int product = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < 0)
                swap(minvalue, maxvalue); //for array swap function has N complexity

            maxvalue = max(nums[i], maxvalue * nums[i]);
            minvalue = min(nums[i], minvalue * nums[i]);
            if(maxvalue > product)
                product = maxvalue;
        }
        return product;
    }
};
