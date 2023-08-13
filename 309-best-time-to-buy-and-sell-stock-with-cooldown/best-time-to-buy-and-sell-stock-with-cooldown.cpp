class Solution {
public:
    int helper(int index, int buy, int cap, vector<vector<vector<int>>> &dp,vector<int>& prices){
        if(cap == 0 || index >= prices.size()) return 0;
        if(dp[index][buy][cap] != -1) return dp[index][buy][cap];
        if(buy){
            return dp[index][buy][cap] = max(
                -prices[index]+helper(index+1, 0, cap, dp, prices),
                helper(index+1, 1, cap, dp, prices )
            );
        }
        return dp[index][buy][cap] = max(
                prices[index]+helper(index+2, 1, cap-1, dp, prices),
                helper(index+1, 0, cap, dp, prices )
        );
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(n, -1)));

        return helper(0, 1, (n-1), dp, prices);
    }
};