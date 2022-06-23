class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int n=s.length();
        int curr=0,maxi=INT_MIN, idx_start=0;
        if(!n){
            return 0;
        }
        
        
        for(int i=0;i<n;i++){
            if(m[s[i]] != 1){
                curr++;
                m[s[i]]=1;
                maxi=max(maxi,curr);
            }else{
                i--;
                m[s[idx_start]]=0;
                idx_start++;
                curr--;
            }
        }
        
     return maxi;   
    }
};