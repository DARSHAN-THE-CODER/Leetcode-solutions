class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        long long int sum=1;
        while(sum<=n)
        {
            cout<<sum<<endl;
            sum=sum*4;
            if(sum==n)
            {
            return true;
            }
        }

            return false;
    }
};