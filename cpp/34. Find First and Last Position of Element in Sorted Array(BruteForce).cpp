// Time Complexity: O(N)
// Space Complexity: O(1)
//Approach
// we initialise the fist and last position with -1
// if we donot find the target in the array then we skip it
// if we have found the target in the array for the first time then we update the first = i;
// and in other cases when we find the target for the next time we keep on updating the last = i
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
       for (int i = 0; i < nums.size(); i++) {
           if(target != nums[i])
               continue;
           if( first == -1) {
               first = i;
           }
           last = i;
       }
        return {first, last};
    }
};
