class Solution {
public:
    int reverse(int x) {
             
        int num=abs(x);
        long long r_num=0;
        while(num!=0){
            long long digit=num%10;
            r_num=r_num*10+digit;
            num=num/10;
        }
        if(r_num>INT_MAX || r_num<INT_MIN)
            return 0;
        if(abs(x)==x){
            return r_num;
            }
        else{
            return (-1)*r_num;
        }
    }
};