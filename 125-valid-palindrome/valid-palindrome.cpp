class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int low = 0;
        int high = n-1;

        while(low<high){
            while(low<high && !iswalnum(s[low])) low++;
            while(low<high && !iswalnum(s[high])) high--;

            if(tolower(s[low]) != tolower(s[high])) return false;
            low++;
            high--;
        }
        return true;
    }
};