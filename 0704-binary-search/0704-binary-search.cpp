class Solution {
public:
int BS(vector<int>& nums, int target,int st,int end){
    if(st<=end){
    int mid=(st+end)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]<=target){
       return  BS(nums, target, mid+1, end);
    }
    else{
        return BS( nums, target, st,mid-1);
    }   
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
       return  BS( nums, target,0,nums.size()-1);
    }
};