class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int count=1;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(i!=0){
                if(nums[i]==nums[i-1])
                    continue;
                }
                if(nums[i]>0){
                    if(nums[i]!=count)
                        return count;
                else
                    count++;
            }
        }
        return count;
    }
};