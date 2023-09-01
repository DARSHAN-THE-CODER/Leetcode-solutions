class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int m = colSum.size();
        
        vector<vector<int>> ans(n,vector<int>(m,0));
        
        int i=0,j=0;
        
        while( i<n && j<m ) {
            int minElement = min(rowSum[i],colSum[j]);
            ans[i][j] = minElement;
            
            rowSum[i] -= minElement;
            colSum[j] -= minElement;
            
            if( rowSum[i] == 0 ) i++;
            else if( colSum[j] == 0 ) j++;
        }
        
        return ans;
    }
};