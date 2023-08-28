//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int ans = -1;
    int hash[26];
    memset(hash,0,sizeof(hash));
    set<char> st;
    int start =0;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
        hash[s[i]-'a'] = i;
        if(st.size() == k){
            ans = max(ans,i-start+1);
        }
        if(st.size() > k){
            while(start != hash[s[start]-'a']){
                start++;
            }
            st.erase(s[start]);
            start++;
        }
        // cout<<start;
    }
    
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends