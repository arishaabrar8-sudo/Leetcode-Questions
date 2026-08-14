class Solution {
public:
void cs(int ind,vector<int>& candidates, int target,vector<vector<int>>&board,vector<int>&ans){

    if(target==0){
        board.push_back(ans);
        return;
    }
    if(target<0)  return;

for(int i=ind;i<candidates.size();i++){
    if(i>ind && candidates[i]==candidates[i-1]){
     continue;
    }
    if(candidates[i]>target){break;}
    ans.push_back(candidates[i]);
    cs(i+1,candidates,target-candidates[i],board,ans);
    ans.pop_back();
}
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>board;
        vector<int>ans;
        sort(candidates.begin(),candidates.end());
        cs(0,candidates,target,board,ans);
        return board;
    
    }
};