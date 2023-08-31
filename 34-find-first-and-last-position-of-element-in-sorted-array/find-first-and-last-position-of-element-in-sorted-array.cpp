class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        int n = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int m = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

        int x = binary_search(nums.begin(), nums.end(), target);
        if(x)
        {
            arr.push_back(n);
            arr.push_back(m-1);
        }
        else{
            arr.push_back(-1);
            arr.push_back(-1);
        }
        return arr;
    }
};