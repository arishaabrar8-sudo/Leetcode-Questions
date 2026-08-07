class Solution {
public:
    bool palindrome(string path){
        string s2=path;
        reverse(s2.begin(),s2.end());
        return s2==path;
    }
    void helper(string s,int index,vector<string>&partition,vector<vector<string>>&ans){
        //base case
        if(index==s.size())
        {ans.push_back(partition);
        return;}

        for(int i=index;i<s.size();i++){
            string path=s.substr(index,i-index+1);
            if(palindrome(path)){
                partition.push_back(path);
                helper(s,i+1,partition,ans);
                partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>partition;
        vector<vector<string>>ans;
        helper(s,0,partition,ans);
        return ans;
    }
};