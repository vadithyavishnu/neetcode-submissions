class Solution {
public:

    bool dfs(int i,int p,vector<vector<int>>& adj,vector<int> &vis){
        vis[i]=1;
        for(auto x : adj[i]){
            if(vis[x]==0){
                if(dfs(x,i,adj,vis)){
                    return true;
                }
            }
            else{
                if(x!=p){
                    return true;
                }
            }
            
        }
        return false;

    }

    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1){
            return false;
        }
        // no cycle
        vector<vector<int>> adj(n);
        
        for(auto edge : edges){
            int u=edge[0];
            int v=edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n,0);
for(int i = 0; i < n; i++) {

            if(vis[i] == 0) {

                if(dfs(i, -1, adj, vis)) {
                    return false;
                }
            }
        }
        return vis.size() == n;

    }
};
