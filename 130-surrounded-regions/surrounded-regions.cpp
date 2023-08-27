class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n+1, vector<int> (m+1, 0));

        queue<pair<int, int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || i==n-1 || j==0 || j==m-1) && board[i][j] == 'O'){
                    q.push({i,j});
                    cout<<i<<" "<<j<<endl;
                }
            }
        }

        int drow[] = {-1, 1, 0, 0};
        int dcol[] = {0 , 0, 1, -1};

        while(!q.empty()){
            auto it = q.front();
            q.pop();

            int row = it.first;
            int col = it.second;
            vis[row][col] = 1;
            for(int i=0;i<4;i++){
                int nrow = row+drow[i];
                int ncol = col+dcol[i];

                if(nrow>= 0 && nrow<n && ncol>=0 && ncol<m && board[nrow][ncol] == 'O' && !vis[nrow][ncol]){
                    q.push({nrow, ncol});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
};