class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int ans=nums[0]; 
        int max_so_far=nums[0];  
        int curr_max=nums[0];  
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                swap(max_so_far,curr_max);
            }
            
            max_so_far=max( max_so_far*nums[i],nums[i]);
            curr_max=min(curr_max*nums[i],nums[i]);
            ans=max(ans,max_so_far);
        }
        return ans;
    }
};