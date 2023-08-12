class Solution {
public:
    int helper(int index, int amount, vector<vector<int>> &dp, vector<int>& coins){
        if(amount == 0) return 1;
        if(index<0 || amount<0) return 0;
        if(index == 0){
            return (amount % coins[0] == 0);
        }
        if(dp[index][amount] != -1) return dp[index][amount];
        int pick=0, notPick;
        notPick=helper(index-1, amount, dp, coins);
        if(coins[index]<=amount){
            pick=helper(index, amount-coins[index], dp, coins);
        }
        return dp[index][amount] = pick + notPick;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n + 1, vector<int>(amount+1, -1));
        return helper(n-1, amount, dp, coins);
    }
};