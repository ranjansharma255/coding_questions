//Time Complexity : O(N)

// An array element is a peak if it is NOT smaller than its neighbours.
// For corner elements, we need to consider only one neighbour.
//
// Following corner cases give better idea about the problem.
//
// If input array is sorted in strictly increasing order, the last element is always a peak element.
// For example, 50 is peak element in {10, 20, 30, 40, 50}.
// If the input array is sorted in strictly decreasing order, the first element is always a peak element.
// 100 is the peak element in {100, 80, 60, 50, 20}.
// If all elements of input array are same, every element is a peak element.

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int index = 0;
        if(nums.size() == 1)
            return 0;
        if(nums[nums.size() - 1] >= nums[nums.size() - 2]) {
            return nums.size() - 1;
        }
        if(nums[0] >= nums[1]){
            return 0;
        }
        for(int i = 1; i <= nums.size() - 2; i++) {
            if( nums[i] >= nums[i + 1] && nums[i] >= nums[i - 1]) {
                index = i;
            }
        }
        return index;
    }
};

