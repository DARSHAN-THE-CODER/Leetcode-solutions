class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int n= matrix[0].size();
        
        int j= m-1;
        int k= 0;
        
        while(j>=0 && k<n)
        {
            if(matrix[j][k] ==  target) return true ;
            else if(matrix[j][k] > target) j--;
            else k++;
        }
        return false;
    }
};