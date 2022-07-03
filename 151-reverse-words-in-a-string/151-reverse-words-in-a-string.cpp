class Solution {
public:
    string reverseWords(string s) {
        
        string res;        
        string temp;
        reverse(s.begin(),s.end());
        s=s+' ';
        for(auto i:s)
        {
           
            if(i==' ' && temp.length()>0)
            {
                reverse(temp.begin(),temp.end());
                res=res+temp+' ';
                temp="";
            }
            else if(i!=' ')
            {
                temp=temp+i;
            }
        }
        res=res.substr(0,res.size()-1);
        return res;
    }
};