class Solution {
public:
    int helper(vector<int> &dp, int i){
        if( i == 0 || i==1) return 1;
        if(dp[i] != -1) return dp[i];
        return dp[i] = helper(dp, i-1) + helper(dp,i-2);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        dp[0] = 0;
        if(n == 1) return 1;
        helper(dp, n);
        return dp[n];
    }
};