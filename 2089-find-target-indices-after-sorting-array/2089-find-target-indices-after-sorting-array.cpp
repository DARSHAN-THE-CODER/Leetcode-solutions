class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> arr;
        sort(nums.begin(),nums.end());
        auto it=find(nums.begin(),nums.end(),target) - nums.begin();
        
        for(int i=it;i<nums.size();i++)
        {
            if(nums[i]==target)
                arr.push_back(i);
            else
                return arr;
        }
        
        return arr;
    }
};