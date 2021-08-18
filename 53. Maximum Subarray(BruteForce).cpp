// Approach 1
// Time Complexity: O(N^3)
// Space Complexity: O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i; j < nums.size(); j++) {
                int sum = 0;
                for(int k = i; k < j; k++) {
                    sum = sum + nums[k];
                }
                if(sum > maxSum)
                    maxSum = sum;
            }
        }
        return maxSum;
    }
};

// Approach 2
// problem with approach 1 is that when ever j is moving right it is adding one element. so we can remove the third
// for(k) loop. And do that computation inside the j loop itself.
// Time Complexity: O(N^2)
// Space Complexity: O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for(int j = i; j < nums.size(); j++) {
                sum = sum + nums[j];
                if(sum > maxSum)
                    maxSum = sum;
            }
        }
        return maxSum;
    }
};
