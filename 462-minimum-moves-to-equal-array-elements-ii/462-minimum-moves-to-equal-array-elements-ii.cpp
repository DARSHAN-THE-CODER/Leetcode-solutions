class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int diff=0;
        sort(nums.begin(),nums.end());
        int median=nums[nums.size()/2];
        for(int i=0;i<nums.size();i++)
        {
            diff=diff+abs(nums[i]-median);
        }
        return diff;
    }
};