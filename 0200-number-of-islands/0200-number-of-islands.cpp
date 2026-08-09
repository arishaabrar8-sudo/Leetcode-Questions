class Solution {
public:
    void bfs(vector<vector<char>>& grid,int i,int j){
        int r=grid.size();
        int c=grid[0].size();
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j]=='0'){return;}
        grid[i][j]='0';
        bfs(grid,i+1,j);//down
        bfs(grid,i-1,j);//up
        bfs(grid,i,j-1);//left
        bfs(grid,i,j+1);//right 
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int island=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    island++;
                    bfs(grid,i,j);
                }
            }
        }
        return island;
    }
};