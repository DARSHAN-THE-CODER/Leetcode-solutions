class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN, count = 0;
        if(n==0) return 0;
        sort(nums.begin(), nums.end());

        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i] == 1){
                count++;
                maxi = max(maxi, count);
            }else{
                if(nums[i+1]-nums[i] !=0){
                    count = 0;
                    maxi = max(maxi, count);
                }
            }
        }
        return max(maxi, count)+1;
    }
};