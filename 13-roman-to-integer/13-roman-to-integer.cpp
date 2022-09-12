class Solution {
public:
    int romanToInt(string s) {
        int sol=0;
        unordered_map <char,int> table = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        for(int i=0;i<s.length()-1;i++){
            if(table[s[i]] < table[s[i+1]]){
                sol-=table[s[i]];
            }
            else 
                sol+=table[s[i]];
        }
        sol+=table[s.back()];
        return sol;
    }
};