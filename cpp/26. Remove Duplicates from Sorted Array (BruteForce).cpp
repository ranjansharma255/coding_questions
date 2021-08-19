class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        set<int> s;
        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        int i = 0;
        for(auto it = s.begin(); it != s.end(); it++) {
            nums[i] = *it;
            i++;
        }
        return s.size();
    }
};

//Time Complexity is : O(NlogN) + O(N)
// o(nlogn) n - > for traversing the array and logn - for inserting into set
// o(n) for inserting from set back to array in worst case if no duplicates is found.

//Space Complexity is : O(N)
//because extra space for set.
