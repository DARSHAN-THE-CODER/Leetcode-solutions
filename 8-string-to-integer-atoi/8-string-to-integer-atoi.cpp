class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int num;
        bool x=true;
        string z;
        if(s=="" || s=="-" || s==" " || s=="+")
            return 0;
        while(x && i<s.length())
        {
            if(isdigit(s[i]) || s[i]=='+')
            {
                
                if(i>0 && s[i-1]=='-')
                {
                        z=z+'-';
                }               
                while(isdigit(s[i]) && i<s.length() && s[i]!='.' && s[i]!=' ' || s[i]=='+')
                {
                    
                        z=z+s[i];
                        x=false;
                        i++;
                    
                }
                }
            
            if((x && isalpha(s[i])) || ( x && s[i]=='.') || (x && s[i]=='+'))  
            {
                cout<<"s[i] "<<s[i]<<endl;
                z='0';
                x=false;
            }
            if(s[i]=='-' && s[i+1]=='-') return 0;
            i++;
        }

        try{
            return stoi(z);
        }
        catch(std::out_of_range &e)
        {
            stringstream ss; 
            ss << z;
            ss >> num;
        }
        catch(...)
        {
            cout<<"i am unexpected "<<endl;
            return 0;
        }
        return num;
    }
};