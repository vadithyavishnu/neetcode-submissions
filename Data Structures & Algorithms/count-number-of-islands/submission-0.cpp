class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j,vector<vector<int>>& vis){
        vis[i][j]=1;
        int n=grid.size();
        int m=grid[0].size();

        if(i+1<n && grid[i+1][j]=='1' && !vis[i+1][j]){
            dfs(grid,i+1,j,vis);
        }
        if(i-1>=0 && grid[i-1][j]=='1' && !vis[i-1][j]){
            dfs(grid,i-1,j,vis);
        }
        if(j+1<m && grid[i][j+1]=='1' && !vis[i][j+1]){
            dfs(grid,i,j+1,vis);
        }
        if(j-1>=0 && grid[i][j-1]=='1' && !vis[i][j-1]){
            dfs(grid,i,j-1,vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                dfs(grid,i,j,vis);
                count++;
                }
            }
        }
        return count;
    }
};
