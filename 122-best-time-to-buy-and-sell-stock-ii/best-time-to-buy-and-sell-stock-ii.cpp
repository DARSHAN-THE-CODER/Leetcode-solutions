class Solution {
public:
    int helper(int index, int buy, vector<vector<int>> &dp, vector<int>& prices){
        if(index == prices.size())  return 0;
        if(dp[index][buy] != -1) return dp[index][buy];
        int profit=0;
        if(buy){    
            return dp[index][buy]  = max( -prices[index] + helper(index+1, 0, dp, prices), helper(index+1, 1, dp, prices) );
        }else{
            return dp[index][buy]  = max( prices[index] + helper(index+1, 1, dp, prices), helper(index+1, 0, dp, prices) );
        }
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2, -1));
        return helper(0,1, dp, prices);
    }
};