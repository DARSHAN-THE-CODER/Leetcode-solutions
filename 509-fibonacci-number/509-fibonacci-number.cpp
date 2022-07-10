class Solution {
public:
    int dp[32];
    int fib2(int n)
    {
        if(n==0) return 0;
        if(n==1) return 1;
        if(dp[n] != -1) return dp[n];
        
        return dp[n]=fib2(n-1) + fib2(n-2);
    }
    int fib(int n) {
        
        memset(dp, -1, sizeof(dp));
        return fib2(n);
    }
};