class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int longest=1,current=1;
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1)
                {
                    current++;
                }
                else
                {
                    longest=max(current,longest);
                    current=1;
                }
            }
        }
        return max(longest,current);
    }
};