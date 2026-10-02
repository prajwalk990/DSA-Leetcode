class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         vector<int> in_degree(numCourses,0); // in_degree for incoming arrows 
        vector<vector<int>> list(numCourses) ; //creating adj list 
        for(int i = 0  ; i < prerequisites.size() ; i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            list[v].push_back(u);
            in_degree[u]++;
        }
        queue<int> q ;
        for(int i = 0 ;  i < in_degree.size() ; i++){
            if(in_degree[i]==0) q.push(i);
        }
        vector<int> ans ;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int nei : list[node]){   // all adjcent node / vertices 
               in_degree[nei]--;
               if(in_degree[nei]==0) q.push(nei);
            }
        }
        if(ans.size()==numCourses) return ans ;
        return {} ;
    }
};