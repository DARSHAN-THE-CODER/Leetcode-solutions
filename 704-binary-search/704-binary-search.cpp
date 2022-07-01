class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size(),mid;
        
        if(end==1)
        {
            if(nums[0]==target)
                return 0;
            return -1;
        }
        
        while(start<=end)
        {
            mid=start+(end-start)/2 ;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
                end=mid-1;
            else
                start=mid+1;
        }
        return -1;
    }
};