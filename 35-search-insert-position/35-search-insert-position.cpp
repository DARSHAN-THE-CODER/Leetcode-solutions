class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = find(nums.begin(),nums.end(),target);
        int index=-1;
        if(it!=nums.end())
        {
            index=it-nums.begin();
            return index;
        }

        index=upper_bound(nums.begin(),nums.end(),target) - nums.begin();        
        return index;
        
    }
};