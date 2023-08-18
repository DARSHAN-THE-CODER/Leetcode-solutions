class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        queue<pair<int, pair<int, int>>> q;
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> ans(n+1, vector<int>(m+1, 1e9));

        q.push({0,{0,0}});
        ans[0][0] = 0;
        int drow[] = { -1, 1, 0, 0};
        int dcol[] = { 0, 0, -1, 1};

        while(!q.empty()){
            int weight = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;

            q.pop();

            for(int i=0;i<4;i++){
                int nrow = drow[i]+row;
                int ncol = dcol[i]+col;

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&  ans[nrow][ncol] > max(abs(heights[row][col] - heights[nrow][ncol]), weight )){
                    ans[nrow][ncol] = max(abs(heights[row][col] - heights[nrow][ncol]), weight );
                    q.push({ans[nrow][ncol] , {nrow, ncol}});
                }
            }
        }
        return ans[n-1][m-1];
    }
};