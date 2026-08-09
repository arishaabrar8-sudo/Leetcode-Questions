class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        int r=grid.size();
        int c=grid[0].size();
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j]=='0'){return;}
        grid[i][j]='0';
        dfs(grid,i+1,j);//down
        dfs(grid,i-1,j);//up
        dfs(grid,i,j-1);//left
        dfs(grid,i,j+1);//right 
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int island=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    island++;
                    dfs(grid,i,j);
                }
            }
        }
        return island;
    }
};