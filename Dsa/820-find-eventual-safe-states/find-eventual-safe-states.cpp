class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
         vector<vector<int>> list(graph.size()) ;
         vector<int> in_degree(graph.size(),0);
         for(int i = 0 ; i < graph.size() ;i++){
             for(int j : graph[i]){
                list[j].push_back(i);
                in_degree[i]++;
             }
         }
         queue<int>q ;
         for(int i = 0 ; i < graph.size(); i++){
            if(in_degree[i]==0){
            q.push(i);
            }
         }
          vector<int> ans;

        while(!q.empty()) {
            int node = q.front();
            q.pop();

            ans.push_back(node);

            for(int nei : list[node]) {
                in_degree[nei]--;

                if(in_degree[nei] == 0) {
                    q.push(nei);
                }
            }
        }
         sort(ans.begin(),ans.end());
         return ans ;
    }
};