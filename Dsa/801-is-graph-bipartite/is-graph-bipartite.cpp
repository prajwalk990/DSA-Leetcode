class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool>vis(n,false);
        vector<int>color(n,-1);
        queue<pair<int,int>>q;
      
       for(int j = 0 ; j < n ; j++){
        if(vis[j]) continue ;
        vis[j]=true ;
        q.push({0,j});
        while(!q.empty()){
        auto[c,node] = q.front();
        q.pop();
        color[node]=c;
        for(int i : graph[node]){
            if(!vis[i]){
             vis[i]=true;
             q.push({!c,i});
            }
            else if(vis[i] && color[i]!=-1 && color[node]==color[i]) return false ;
        }
        }
       }
       return true ;
    }
};