class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr=nums;
        sort(arr.begin(),arr.end());
        for(int i=0;i<nums.size();i++)
        {
            int a=find(arr.begin(),arr.end(),nums[i])-arr.begin();
            arr.push_back(a);
        }
        arr.erase(arr.begin(),arr.end()-nums.size());
        return arr;
    }
};