//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int helper(int wt[], int val[], int leftout, int ind, vector<vector<int>> &dp){
        // if(leftout == 0) return 0;
        if(ind<0) return 0;
        
        if(dp[ind][leftout] != -1) return dp[ind][leftout];
        int taken = 0, nt = 0;
        
        if (wt[ind] > leftout) {
 
        // Store the value of function call
        // stack in table before return
        dp[ind][leftout] = helper(wt, val,leftout, ind - 1, dp);
        return dp[ind][leftout];
    }
    else {
        // Store value in a table before return
        dp[ind][leftout] = max(val[ind]
                           + helper(wt, val,leftout - wt[ind],
                                         ind - 1, dp),
                       helper(wt, val, leftout, ind - 1, dp));
 
        // Return value of table after storing
        return dp[ind][leftout];
    }
        
        // if(leftout > wt[ind]){
        //     taken = val[ind] + helper(wt, val, leftout-wt[ind], ind-1, dp);
        // }else{
        //     nt = helper(wt, val, leftout, ind-1, dp);
        // }
        // return dp[ind][leftout] = max(taken, nt);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> dp(n, vector<int>(W+1,-1));
       return helper(wt, val, W, n-1, dp);
        //  dp[n][W];
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends