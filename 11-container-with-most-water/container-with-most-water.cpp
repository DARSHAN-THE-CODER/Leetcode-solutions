class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int low = 0;
        int high = n-1;
        int maxi = 0;
        
        while(low < high){
            int currMax = min(height[low], height[high]) * (high-low);
            maxi = max(maxi, currMax);

            if(height[low] > height[high]){
                high--;
            }else{
                low++;
            }
        }
        return maxi;
    }   
};