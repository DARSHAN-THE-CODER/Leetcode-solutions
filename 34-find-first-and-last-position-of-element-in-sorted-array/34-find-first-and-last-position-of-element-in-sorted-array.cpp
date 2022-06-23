class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> range;
        if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                range.push_back(0);
                range.push_back(0);
                return range;
            }
            else{
                range.push_back(-1);
                range.push_back(-1);
                return range;
            }
        }
        for(int i=0;i<nums.size();i++)
        {        
            
            if(nums[i]==target)
            {
                if(range.size()==0)
                    range.push_back(i);
                if(i==nums.size()-1)
                {
                    range.push_back(i);
                }
                else{
                    if(nums[i+1]!=target)
                        range.push_back(i);
                }
            }
        }
        
        if(range.size()==1)
        {
            range.push_back(range[0]);
        }
        if(range.size()==0)
        {
            range.push_back(-1);
            range.push_back(-1);
            return range;
        }
        return range;
    }
};