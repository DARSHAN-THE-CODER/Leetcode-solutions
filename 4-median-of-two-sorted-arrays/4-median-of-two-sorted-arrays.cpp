class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median=0;
        
        vector<int> vect(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),vect.begin());
        sort(vect.begin(),vect.end());
        if(vect.size()%2 !=0)
        {
            median=vect[(vect.size()+1)/2 -1];
            return median;
        }
    
        median = (vect[(vect.size())/2 -1] + vect[(vect.size())/2 ])/2.0 ; 
        return median;
    }
};