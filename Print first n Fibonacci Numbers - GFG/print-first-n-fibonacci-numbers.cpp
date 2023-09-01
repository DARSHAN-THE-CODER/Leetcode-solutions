//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    // int helper(int n, vector<long long> &ans){
    //     if(n==0) return 0;
    //     else if(n==1) return 1;
    //     else if(ans[n] != -1) return ans[n];
    //     else
    //     return ans[n] = helper(n-2, ans)+helper(n-1, ans);
    // }
    long long fib(int n,  vector<long long> &ans) {
        // if(n<=1)
        //     return n;
        if(ans[n] != -1) return ans[n];
        long long temp = fib(n-1, ans)+fib(n-2, ans);
        return ans[n]= temp;
    }
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> ans(n,-1);
        ans[0] = 1;
        ans[1] = 1;
        // for(int i=0;i<n;i++){
        //     ans.push_back(fib(i,ans));
        // }
        fib(n-1, ans);
        return ans;
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
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends