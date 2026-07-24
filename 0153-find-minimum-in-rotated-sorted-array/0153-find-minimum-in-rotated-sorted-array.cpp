class Solution {
public:
    int findMin(vector<int>& nums) {
        //bruteforec approach using linear search
        // int ans=INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<=ans){ans=nums[i];}
        // }
        // return ans;

        //using binary search
        int st=0,end=nums.size()-1,ans=INT_MAX;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[st]<=nums[mid]){//left sorted
                ans=min(ans,nums[st]);
                st=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                end=mid-1;
            }
        }
        return ans;
    }
};