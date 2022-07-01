class Solution {
public:
    static bool compare(vector<int>& a,vector<int>& b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int sum=0;
        int box=0;        
        for(int i=0;i<boxTypes.size();i++)
        {
            
           if(box<=truckSize)
           {   
               if(box+boxTypes[i][0] > truckSize)
               {
                   sum=sum+(truckSize-box)*boxTypes[i][1];
               }
               else
                sum=sum+boxTypes[i][0]*boxTypes[i][1];
           }
           box=box+boxTypes[i][0];
        }
        return sum;
    }
};