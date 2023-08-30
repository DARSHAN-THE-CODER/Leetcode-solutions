class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>lp(n,1);
        vector<int>rp(n,1);
        cout<<"lp"<<endl;
        for(int i=1;i<n;i++)
        {
            lp[i]=lp[i-1]*nums[i-1];
            cout<<lp[i]<<" ";
        }
        cout<<endl<<"rp"<<endl;
        for(int i=n-2;i>=0;i--)
        {
            rp[i]=rp[i+1]*nums[i+1];
            cout<<rp[i]<<" ";

        }
        vector<int>ans(n,1);
        for(int i=0;i<n;i++)
        {
            ans[i]=lp[i]*rp[i];
        }
        return ans;
    }
};