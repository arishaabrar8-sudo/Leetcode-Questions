class Solution {
public:
     vector<vector<int>> ans;
    void PS(int i,vector<int>& nums,vector<int>& curr){
        if(i==nums.size()){//base case
            ans.push_back(curr);
            return ;
        }
        curr.push_back(nums[i]);//include
        PS(i+1,nums,curr);

        curr.pop_back();//back tracking
        PS(i+1,nums,curr);//exclude
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        PS(0,nums,curr);
        return ans;
        // cout<<" "<<endl;
        // for(int i:nums){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<endl;
        //     for(int j=i+1;j<nums.size();j++){
        //         cout<<nums[i]<<" ";
        //         cout<<nums[j]<<endl;
        //     }
        // }
        // return {}; // wrong approach we want a vector
    }
};