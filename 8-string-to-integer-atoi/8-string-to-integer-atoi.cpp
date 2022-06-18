class Solution {
public:
    int myAtoi(string s) {
        int sign = 1; 
        int ans = 0; 
        int i = 0;
        int n = s.size();
        
        
        while (i < n && s[i] == ' ') { 
            i++; 
        }
        
        if (i < n && s[i] == '+') {
            sign = 1;
            i++;
        } 
        else if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }

        while (i < n && isdigit(s[i])) {
            int sol = s[i] - '0';


            if ((ans > INT_MAX / 10) || (ans == INT_MAX / 10 && sol > INT_MAX % 10))                    { 
                  
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            ans = 10 * ans + sol;
            i++;
            }
        return sign * ans;
    }
};