class Solution {
public:
    static bool myFn(int a,int b)
    {
        return a<b;
    }
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end(),myFn);
        int ice=0;
        for(auto i:costs)
        {
            if(i<=coins)
            {
                ice=ice+1;
                coins=coins-i;
            }
            
        }
        return ice;
    }
};