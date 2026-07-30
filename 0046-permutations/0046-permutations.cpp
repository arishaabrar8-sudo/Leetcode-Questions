class Solution {
public:
void perm(vector<int>& nums,int ind,vector<vector<int>>& arr){
    if(ind==nums.size()){
        arr.push_back(nums);
        return;
    }
    for(int i=ind;i<nums.size();i++){
        swap(nums[ind],nums[i]);
        perm(nums,ind+1,arr);
        swap(nums[ind],nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> arr;
        perm( nums,0, arr);
        return arr;
    }
};