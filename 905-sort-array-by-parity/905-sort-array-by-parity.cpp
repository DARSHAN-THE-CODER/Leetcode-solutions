class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int len = nums.size()-1;
        for(int i = 0; i<len; i++){

            if(nums[i]%2 == 1 )
            swap( nums[i--], nums[len--] );
        }
        return nums;
    }
};