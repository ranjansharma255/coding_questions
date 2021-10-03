https://leetcode.com/problems/maximum-subarray/

// Kadane's Algorithm
// Time Complexity: O(N) Linear Iteration
// Space Complexity: O(1)
// here at the maxSum = 0 statement this would not work if all the elements in the array are negative.
// so to make it work we can initialize the maxSum = INT_MIN or -infinity
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            curSum = curSum + nums[i];
            if(curSum > maxSum) {
                maxSum = curSum;
            }
            if(curSum < 0) {
                curSum = 0;
            }
        }
        return maxSum;
    }
};
// Related Resources
// https://afteracademy.com/blog/maximum-subarray-sum
