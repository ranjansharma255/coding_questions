
//Java solution for the problem
class Solution {
    public int maximumWealth(int[][] accounts) {
        int ma = Integer.MIN_VALUE;
        for(int person = 0; person < accounts.length; person++){
            int sum = 0;
            for(int account = 0; account < accounts[person].length; account++) {
                sum += accounts[person][account];
                ma = Math.max(sum,ma);
            }
        }
        return ma;
    }
}