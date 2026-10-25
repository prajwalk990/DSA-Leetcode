class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<bool>> vis(n,vector<bool>(m,false));
    for(int i = 0 ; i < n ; i++ ){
         if(grid[i][0]==0 && !vis[i][0]){
            dfs(grid,vis,i,0);
         }
         if(grid[i][m-1]==0 && !vis[i][m-1]){
            dfs(grid,vis,i,m-1);
         }
    }
    for(int j = 0 ; j < m ; j++){
        if(grid[0][j]==0 && !vis[0][j]){
            dfs(grid,vis,0,j);
        }
        if(grid[n-1][j]==0&& !vis[n-1][j]){
            dfs(grid,vis,n-1,j);
        }
    }
   int ans = 0 ;
    // consider for answer 
    for(int i = 1 ; i < n-1 ; i++){
        for(int j = 1 ; j < m -1 ; j++){
           if(grid[i][j]==0 && !vis[i][j]){
              dfs(grid,vis,i,j);
              ans++;
           }
        }
    }
    return ans ;
    }
    void dfs(vector<vector<int>>& grid,vector<vector<bool>>& vis , int i , int j){
         vis[i][j]=true ;
            int n = grid.size();
            int m = grid[0].size();
            int dir[4][4] = { {-1,0},{0,1},{0,-1},{1,0}};
            for(int k = 0 ; k < 4 ; k++){
                int row = i + dir[k][0];
                int col = j + dir[k][1];

                if(row>=0 && col>=0 && row<n && col<m && grid[row][col]==0&& !vis[row][col]){
                    // vis[row][col]=true ;
                     dfs(grid,vis,row,col);
                }
            }
    }
};