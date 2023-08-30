class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = INT_MIN;
        int prev = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                prev++;
                maxi = max(maxi, prev);
            }else{
                maxi = max(maxi, prev);
                prev=0;
            }
        }
        return maxi;
    }
};