class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // -------------Method 1
        // int ans = -1;
        // if(nums.size() == 1){
        //     if(nums[0] == 0){
        //         return 1;
        //     }
        //     if(nums[0] == 1){
        //         return 0;
        //     }
        // }
        // sort(nums.begin(),nums.end());
        // if(nums[0] !=0 ){
        //     return 0;
        // }
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i+1] - nums[i] != 1){
        //         ans = nums[i]+1;
        //         return ans;
        //     }
        // }
        // return nums[nums.size()-1] + 1;


        // --------------- Method 2 using xor
        int xor1 = 0, xor2 = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int n = nums.size();

        return n*(n+1)/2 - sum ;
    }
};