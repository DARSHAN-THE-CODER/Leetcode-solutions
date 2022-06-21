class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto i:operations)
        {
            if(i=="X++")
                x++;
            if(i=="++X")
                ++x;
            if(i=="--X")
                --x;
            if(i=="X--")
                x--;
        }
        return x;
    }
};