class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && nums[i] != nums[i-1])){
                int low=i+1;
                int high = n-1;

                int target = 0 - nums[i];

                while(low<high){
                    if(nums[low]+nums[high] == target){
                        ans.push_back({nums[i], nums[low], nums[high]});

                        while(low<high && nums[low] == nums[low+1]) low++;
                        while(low<high && nums[high] == nums[high-1]) high--;

                        low++;
                        high--;
                    }else{
                        if(low<high && nums[low]+nums[high] < target){
                            low++;
                        }else{
                            high--;
                        }
                    }
                }
            }
        }
        return ans;
            
    }
};