class Solution {
public:
    bool isPalindrome(int x) {
        
        long long r_num=0;
        long long num=abs(x);
        if(x>INT_MAX || x<INT_MIN)
            return false;
        if(abs(x)!=x)
            return false;
        while(num!=0)
        {
            long long digit=num%10;
            r_num=r_num*10+digit;
            num=num/10;
        }
                
        for(int i=0;i<to_string(x).length();i++)
        {
            long long digit2=r_num%10;
            long long digit3=x%10;
            if(digit2!=digit3)
                return false;
            r_num=r_num/10;
            x=x/10;
        }
        return true;
    }
};