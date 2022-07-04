class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n=ratings.size();
        vector<int> candies(n,1);
        
        for(int i=0;i<n-1;i++)
        {
            ratings[i+1]>ratings[i] ?( candies[i+1]=candies[i]+1) : ' ';
        }
        for(int i=n-2;i>=0;i--)
        {
            (ratings[i]>ratings[i+1] && candies[i]<=candies[i+1]) ? (candies[i]=candies[i+1]+1) : ' ';                
        }
        
        int sum=accumulate(candies.begin(),candies.end(),0);
        return sum;
    }
};