class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long long ans;
        
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        int a = horizontalCuts[1] - horizontalCuts[0];
        int b = verticalCuts[1] - verticalCuts[0];
        for(int i=1;i<horizontalCuts.size();i++)
        {
            a=max(a,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        for(int i=1;i<verticalCuts.size();i++)
        {
            b=max(b,verticalCuts[i]-verticalCuts[i-1]);
        }
        ans=(long long)(a)*(long long)(b);
        return (ans)%(1000000007);
    }
};