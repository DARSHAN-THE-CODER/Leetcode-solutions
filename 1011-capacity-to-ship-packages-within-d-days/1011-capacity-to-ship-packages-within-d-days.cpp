class Solution {
public:
    
     bool isPossible(vector<int>& weights, int days, int mid)
    {
        int sum = 0;
        int count = 1;
        for(int i = 0; i < weights.size(); i++)
        {
            if(sum + weights[i] <= mid)
            {
                sum += weights[i];
            }
            else{
                ++count;
                if(count > days || weights[i] > mid) return false;
                sum = weights[i];
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int s=0;
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum=sum+weights[i];
        }
        int e=sum;
        int ans=-1;
        int mid=s+(e-s)/2 ;
        
        while(s<=e)
        {
            if(isPossible(weights,days,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};