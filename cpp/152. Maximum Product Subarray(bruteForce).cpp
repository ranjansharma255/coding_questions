//Time Complexity: O(N^2)
//Space Complexity: O(1)
// In this approach we are finding all the subarray products and returning the maxproduct
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct = INT_MIN;
        int product;
        for(int i = 0; i < nums.size(); i++){
            product = 1;
            for(int j = i; j < nums.size(); j++){
                product *= nums[j];
                if(product > maxproduct)
                    maxproduct = product;
            }
        }
        return maxproduct;
    }
};
