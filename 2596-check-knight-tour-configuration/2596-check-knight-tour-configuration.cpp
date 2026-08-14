class Solution {
public:
    bool cv(vector<vector<int>>& grid,int n,int r,int c,int expval){
        //base case
        if(r<0 || r>=n ||c<0 ||c>=n || grid[r][c]!=expval){
            return false;
        }
        if(expval==n*n -1) return true;
       return  cv(grid,n,r-2,c+1,expval+1) ||
        cv(grid,n,r-2,c-1,expval+1)||
        cv(grid,n,r-1,c-2,expval+1)||
        cv(grid,n,r-1,c+2,expval+1)||
        cv(grid,n,r+1,c+2,expval+1)||
        cv(grid,n,r+2,c+1,expval+1)||
        cv(grid,n,r+2,c-1,expval+1)||
        cv(grid,n,r+1,c-2,expval+1);

    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int row=0,col=0,expval=0;
        int n=grid.size();
        return cv(grid,n,0,0,expval);
    }
};