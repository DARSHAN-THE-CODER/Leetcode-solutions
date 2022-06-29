class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=0;
        sort(nums.begin(),nums.end());
        max=(nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        return max;
    }
};