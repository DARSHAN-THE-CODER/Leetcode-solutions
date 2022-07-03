class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int diff=0;
        sort(nums.begin(),nums.end());
        int median=nums[nums.size()/2];
        for(auto i:nums)
        {
            diff+=abs(i-median);
        }
        return diff;
    }
};