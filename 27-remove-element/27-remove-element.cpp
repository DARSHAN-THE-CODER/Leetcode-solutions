class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // sort(nums.begin(),nums.end());
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=val)
            {
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};