class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
         int n = grid1.size();
         int m = grid1[0].size();
         int ans = 0 ;
         vector<vector<bool>> vis(n,vector<bool>(m,false));
         for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid2[i][j]==1 && grid1[i][j]==1 && !vis[i][j]){
                    if(bfs(grid1,grid2,vis,i,j)) ans++;
                }
            }
         }
         return ans ;
    }
    bool bfs(vector<vector<int>>& grid1,vector<vector<int>>& grid2,vector<vector<bool>>& vis,int i , int j){
             vis[i][j]=true ;
             queue<pair<int,int>>q;
             q.push({i,j});
             int dir[4][2]={{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
               int n = grid1.size();
               int m = grid1[0].size();
               bool is = false ;
             while(!q.empty()){
                auto [r,c]= q.front();
                q.pop();
                if(grid1[r][c]==0 && grid2[r][c]==1) is = true  ;
                for(int k = 0 ; k < 4 ; k++){
                    int row = r + dir[k][0];
                    int col = c + dir[k][1];

                    if(row>=0 && row<n && col>=0 && col<m && grid2[row][col]==1 && !vis[row][col] ){
                          if(grid1[r][c]==0 && grid2[r][c]==1) is = true  ;
                        vis[row][col]=true ;
                        q.push({row,col});
                    }
                }
             }
             if(is) return false ;
             return true ;
    }

};