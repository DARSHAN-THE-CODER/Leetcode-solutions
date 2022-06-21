class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr;
        int temp=nums[0];
        arr.push_back(temp);
        for(int i=1;i<nums.size();i++)
        {
            temp=temp+nums[i];
            arr.push_back(temp);
            
        }
        return arr;
    }
};