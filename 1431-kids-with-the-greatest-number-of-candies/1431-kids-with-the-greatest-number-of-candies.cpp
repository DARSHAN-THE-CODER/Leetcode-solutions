class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> arr;
        
        for(auto i:candies)
        {
            int max = *max_element(candies.begin(),candies.end());
            if((i+extraCandies)>=(max))
                arr.push_back(true);
            else
                arr.push_back(false);
        }
        return arr;
    }
};