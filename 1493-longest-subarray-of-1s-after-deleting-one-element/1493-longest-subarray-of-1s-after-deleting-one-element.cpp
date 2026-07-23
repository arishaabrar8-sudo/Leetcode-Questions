class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,zero=0,maxi=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zero++;
            }
            while(zero>1){
                if(nums[l]==0) {zero--;}
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi-1;// becauuse the length contain atleast one 0 
    }
};