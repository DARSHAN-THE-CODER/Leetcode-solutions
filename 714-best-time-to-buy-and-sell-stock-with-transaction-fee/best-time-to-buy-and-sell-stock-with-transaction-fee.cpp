class Solution {
public:
    int helper(int index, int buy, int cap, int &fee, vector<vector<int>> &dp, vector<int>& prices ){
        if(index >= prices.size() || cap==0) return 0;
        if(dp[index][buy]!= -1) return dp[index][buy];
        if(buy){
            return dp[index][buy] = max(
                -prices[index]+helper(index+1, 0, cap, fee, dp, prices),
                helper(index+1, 1, cap, fee, dp, prices)
            );
        }
        return dp[index][buy]= max(
                prices[index]+helper(index+1, 1, cap-1, fee, dp, prices) - fee,
                helper(index+1, 0, cap, fee, dp, prices)
        );
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2,  -1));
        return helper(0, 1, n/2, fee, dp, prices);
    }
};