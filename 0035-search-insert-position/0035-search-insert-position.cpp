class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // auto it=lower_bound(nums.begin(),nums.end(),target);
        // return it-nums.begin();
        // OR
        int st=0,end=nums.size()-1;
        int ans=nums.size();
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]>=target){
                ans=mid;
                end=mid-1;
            }
            else{st=mid+1;}
        }
        return ans;
    }
};