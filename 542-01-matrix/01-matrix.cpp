class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m=mat[0].size();
        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> vis(n+1, vector<int>(m+1,0));
        vector<vector<int>> ans(n, vector<int>(m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 0){
                    q.push({{i, j},0});
                    vis[i][j] = 1;
                    ans[i][j] = 0;
                }
            }
        }

        int drow[] = {-1, 0, 1, 0 };
        int dcol[] = { 0, 1, 0,-1 }; 

        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dist = q.front().second;

            ans[row][col] = dist;
            q.pop();

            for(int i=0;i<4;i++){
                int nrow = row+drow[i];
                int ncol = col+dcol[i];
                int ndist = dist + 1;

                if(nrow>= 0 && nrow< n && ncol>=0 && ncol<m && !vis[nrow][ncol]){
                    q.push({{nrow, ncol}, ndist});
                    vis[nrow][ncol] = 1;
                }
            }
        }
        return ans;
    }
};