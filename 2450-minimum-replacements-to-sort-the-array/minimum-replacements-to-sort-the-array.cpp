class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        long long last = nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]>last){
                long long t = nums[i]/last;
                if(nums[i]%last) t++;
                last = nums[i]/t;
                ans+=(t-1);
            }else{
                last = nums[i];
            }
        }
        return ans;
    }
};