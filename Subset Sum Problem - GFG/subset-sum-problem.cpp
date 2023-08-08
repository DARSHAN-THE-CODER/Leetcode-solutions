//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
int solve(vector<int> &arr, int sum, int ind, int n, vector<vector<int>> &dp){
    if(sum == 0) return 1;
    if(sum<0 || ind>=n) return 0;
    int left = 0,right = 0;
    if(dp[ind][sum]!=-1) return dp[ind][sum];
    if(sum - arr[ind] == 0) return 1;
    if(sum-arr[ind]>=0){
        left = solve(arr,sum-arr[ind],ind+1,n,dp);
    }
    right = solve(arr,sum,ind+1,n,dp);
    return dp[ind][sum] = (left==1 || right == 1)?1:0;
}
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        solve(arr,sum,0,n,dp);
        // for(int i=0;i<=n;i++){
        //     for(int j=0;j<sum+1;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        if(dp[0][sum] == 1) return true;
        return false;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends