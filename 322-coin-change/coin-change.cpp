class Solution {
public:
    int helper(int index, int amount, vector<vector<int>> &dp, vector<int>& coins){
        // if(amount == 0) return 1;
        if(index == 0) {
            if(amount%coins[index] == 0)
                return amount/coins[index];
            return 1e9;
        }
        if(dp[index][amount] != -1) return dp[index][amount];
        int pick=INT_MAX, notPick;
        notPick = 0+helper(index-1, amount, dp, coins);
        if(coins[index] <= amount){

            pick=1+helper(index,amount-coins[index], dp, coins);
        }
        return dp[index][amount]=min(pick, notPick);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        if(n==1){
            if(amount == 0) return 0;
            if(amount%coins[0]== 0){
                return amount/coins[0];
            }else{
                return -1;
            }
        }
        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
        int ans = helper(n-1, amount, dp, coins);
        return ans >= 1e9 ? -1 : ans;
    }
};