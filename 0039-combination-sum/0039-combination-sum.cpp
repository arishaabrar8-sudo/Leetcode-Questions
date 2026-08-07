class Solution {
public:
// set(vector<vector<int>uni);
void helper(vector<int>& candies,int i,int target,vector<int> &ans,vector<vector<int>>&board){
if(i==candies.size() || target<0){
    return ;
}
if(target==0){
// if(ans.find(uni.begin(),uni.end),0){
//     uni.insert(ans);
board.push_back(ans);
return;

}
ans.push_back(candies[i]);
// helper(candies,i+1,target-candies[i],ans,board);//include single time
helper(candies,i,target-candies[i],ans,board);//include multiple time
ans.pop_back();//remove the element fo rnot including
helper(candies,i+1,target,ans,board);





}
    vector<vector<int>> combinationSum(vector<int>& candies, int target) {
        vector<vector<int>>board;
        vector<int> ans;
        helper(candies,0,target,ans,board);
        return board;
    }
};