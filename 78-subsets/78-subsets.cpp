class Solution {
public:
    void printSub(int index,int n,vector<int> nums,vector<int> &temp, vector<vector<int>>&ans)
    {
        if(index>=n)
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        printSub(index+1,n,nums,temp,ans);
        temp.pop_back();
        printSub(index+1,n,nums,temp,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=nums.size();
        printSub(0,n,nums,temp,ans);
        return ans;
    }
};