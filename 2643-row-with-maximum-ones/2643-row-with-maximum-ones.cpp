class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxcount=0;
        int index=0;
        vector<int>hello;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                count+=mat[i][j];
            }
            if(count>maxcount){
                maxcount=count;
                index=i;
                hello.push_back(index);
                hello.push_back(maxcount);
            }
        }
        return {index,maxcount};
    }
};