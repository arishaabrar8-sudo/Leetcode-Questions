class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
    int st=1,end=*max_element(nums.begin(),nums.end());
    while(st<=end){
        int mid=st+(end-st)/2;
        int sum=0;
        for(int x:nums){sum+=(x+mid-1)/mid;}
        if(sum<=threshold){end=mid-1;}
        else{
            st=mid+1;
        }
    }

    return st;
    }
};