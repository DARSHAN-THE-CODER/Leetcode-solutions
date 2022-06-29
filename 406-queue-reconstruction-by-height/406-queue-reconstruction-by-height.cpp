// Sort the array in decreasing order of their heights and if two people have same height, sort them in increasing order of their [1] index. (We used compare function for this)
// [[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]] => [[7,0], [7,1], [6,1], [5,0], [5,2], [4,4]]

// Now we constructed an array res which will have elements in order of sorted array at indexes based on the index of their [1] position.

class Solution {
public:
    static bool check(vector<int>&a , vector<int>&b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];
        
        return a[0]>b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {

        sort(people.begin(),people.end(),check);
        
        vector<vector<int>> res;
        for(int i=0;i<people.size();i++)
        {
            int index=people[i][1];
            res.insert(res.begin()+index,people[i]);
        }
        return res;
    }
};