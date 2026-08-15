class Solution {
public:
    void permutation(int ind,vector<int>& nums,vector<vector<int>> &per ){
        if(ind==nums.size()){
            per.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            permutation(ind+1,nums,per);
            swap(nums[ind],nums[i]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> per;
        permutation(0,nums,per);
        return per;
    }
};