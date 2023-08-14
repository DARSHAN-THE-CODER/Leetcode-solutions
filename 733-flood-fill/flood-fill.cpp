class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();

        queue<pair<int, int>> q;
        vector<vector<int>> vis(n+1, vector<int>(m+1, 0));
        int prevcolor = image[sr][sc];

        vis[sr][sc] = 1;
        q.push({sr, sc});
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = { 0, -1, 0, 1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;

            q.pop();
            if(image[row][col]==prevcolor) image[row][col]=color;

            for(int i=0;i<4;i++){
                int nrow = row+drow[i];
                int ncol = col+dcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && image[nrow][ncol] == prevcolor){
                    q.push({nrow, ncol});
                    image[nrow][ncol] = color;
                    vis[nrow][ncol] = 1;
                }
            }
        }

        return image;
    }
};