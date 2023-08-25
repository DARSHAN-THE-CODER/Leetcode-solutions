class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0) return;

        int d = k%n;
        if(d==0) return;
        reverse(nums.begin(),nums.begin()+n-d);
        reverse(nums.begin()+n-d, nums.end());
        reverse(nums.begin(), nums.end());
    }
};