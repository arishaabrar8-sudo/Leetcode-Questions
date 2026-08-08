class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i:nums1){v.push_back(i);}
        for(int i:nums2){v.push_back(i);}
        sort(v.begin(),v.end());
        if(v.size()%2==1){
            return v[v.size()/2];
        }
        // int median;
        else{
            int median=v[v.size()/2]+v[v.size()/2 -1];
            return median/2.0;
        }
    }
};