class MyCalendarThree {
public:
    map<int,int>m;  
    MyCalendarThree() {
        
    }
    
    int book(int startTime, int endTime) {
        m[startTime]++;
        m[endTime]--;
        int val = 0;
        int res = 0;
        for(auto i : m){
            val = val + i.second;
            res = max (val , res);
        }
        return res;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */