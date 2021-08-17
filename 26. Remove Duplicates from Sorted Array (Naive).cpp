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
