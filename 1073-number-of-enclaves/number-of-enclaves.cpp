class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n+1, vector<int>(m+1, 0));

        queue<pair<int, int>> q;

        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    if((i == 0 || i == n - 1 || j == 0 || j == m - 1)){
                        if( grid[i][j] == 1)
                        {
                        q.push({i, j});
                        vis[i][j] = 1;
                        }
                    }
            }
        }

        int drow[] = { -1 , 0, 1, 0 };
        int dcol[] = { 0, -1, 0, 1 };

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            // vis[row][col] = 1;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = row+drow[i];
                int ncol = col+dcol[i];
                // cout<<"here "<<nrow<<ncol<<endl;
                if(nrow >=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol] == 1 && !vis[nrow][ncol]){
                    q.push({nrow, ncol});
                    // cout<<"here "<<nrow<<ncol<<endl;
                    vis[nrow][ncol] = 1;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1 && !vis[i][j]){
                    count++;
                }
            }
        }

        return count;
    }
};