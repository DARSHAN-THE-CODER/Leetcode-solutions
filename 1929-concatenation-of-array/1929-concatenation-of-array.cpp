class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> sum;
        cout<<"size is "<<nums.size()<<endl;
        int n=nums.size();
        for(int i=0;i<(2*n);i++)
        {
            if(i<n)
                sum.push_back(nums[i]);
            else
                sum.push_back(nums[i-n]);
        }
        return sum;
    }
};