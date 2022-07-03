class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int p=1;
        int v=1;
        
        for(int i=1;i<nums.size();i++)
        {
            nums[i]<nums[i-1] ? v=p+1 : ' ' ;

            nums[i]>nums[i-1] ? p=v+1 : ' ';        
        }
        return max(p,v);
    }
};