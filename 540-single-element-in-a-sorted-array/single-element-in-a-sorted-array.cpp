class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        if(n==1) return nums[0];
        while(low<high){
            if(nums[low]!=nums[low+1]) return nums[low];
            if(nums[high]!=nums[high-1]) return nums[high];
            if(nums[low]==nums[low+1]) low+=2;
            if(nums[high==nums[high-1]]) high-=2;
        }
        if(low == high) return nums[low];
        return -1;
    }
};