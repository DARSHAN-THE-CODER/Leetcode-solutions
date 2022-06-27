class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows=matrix.size() , cols=matrix[0].size();
        int top=0 , right=cols-1 ;
        while(top<=rows-1 && right>=0){
            if(matrix[top][right]==target)
                return true;
            else if(matrix[top][right]>target)
                    right--;
                else
                     top++;
        }
        return false;
    }
};