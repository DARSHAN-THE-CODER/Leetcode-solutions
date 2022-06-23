class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            if(i!=matrix.size()-1)
            {
                if(!(target<matrix[i][0]))
                {
                    for(int j=0;j<matrix[i].size();j++)
                    {
                       if(matrix[i][j]==target)
                           return true;
                    }
                }
            }
            else{
                for(int j=0;j<matrix[i].size();j++)
                    {
                       if(matrix[i][j]==target)
                           return true;
                    }
                }
        }
        return false;
    }
};