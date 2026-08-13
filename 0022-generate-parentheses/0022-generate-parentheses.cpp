class Solution {
public:
void generate(int open,int close,int n,string & current,vector<string>&ans){
    if (current.length()==2*n){ans.push_back(current);
    return ;}
    if(open<n){
        current.push_back('(');
        generate(open+1,close,n,current,ans);
        current.pop_back();//backtrack
    }
    if(close<open){
        current.push_back(')');
        generate(open,close+1,n,current,ans);
        current.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        //your code goes here
        vector<string>ans;
        string current="";
        generate(0,0,n,current,ans);
        return ans;
    }
};