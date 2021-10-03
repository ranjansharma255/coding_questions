class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ma = 0;
        for(int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for(int j = 0; j < accounts[i].size(); j++) {
              //accounts[i].size() in the second forloop means that for every row (i) we are traversing to its length;
                sum += accounts[i][j];
                ma = max(sum,ma);
            }
        }
        return ma;
    }
};

// Enhanced version of the above code
class Solution {
    public int maximumWealth(int[][] accounts) {
        int ma = Integer.MIN_VALUE;
        for(int[] ints: accounts){
            int sum = 0;
            for(int value : ints) {
                sum += value;
                ma = Math.max(sum,ma);
            }
        }
        return ma;
    }
}
