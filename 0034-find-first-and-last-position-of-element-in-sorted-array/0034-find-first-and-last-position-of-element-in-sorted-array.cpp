class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()) return {-1, -1};

       int indexi=-1,indexj=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){indexi=i;
            break;}
        }
        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]==target){
                indexj=j;
                break;
            }
        }


        return {indexi,indexj};
    }
};