class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, zeroCount = 0; 
        
        for(auto n: nums)
            (n == 0) ?  zeroCount ++: prod *= n;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(zeroCount)
                nums[i] = (!nums[i] && zeroCount == 1) ? prod : 0;
            else
                nums[i] = prod / nums[i];
            
        }
       return nums; 
    }
};