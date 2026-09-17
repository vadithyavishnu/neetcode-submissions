class Solution {
public:
    bool isCycle(int src, vector<vector<int>>& adj,
                 vector<bool>& vis, vector<bool>& rec) {

        vis[src] = true;
        rec[src] = true;

        for (int v : adj[src]) {

            if (!vis[v]) {
                if (isCycle(v, adj, vis, rec))
                    return true;
            }
            else if (rec[v]) {
                return true;
            }
        }

        rec[src] = false;
        return false;
    }

    void dfs(int src, vector<vector<int>>& adj,
             vector<bool>& vis, stack<int>& st) {

        vis[src] = true;

        for (int v : adj[src]) {
            if (!vis[v]) {
                dfs(v, adj, vis, st);
            }
        }

        st.push(src);
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        // Build graph
        for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }

        // Step 1: Check for cycle
        vector<bool> vis(numCourses, false);
        vector<bool> rec(numCourses, false);

        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                if (isCycle(i, adj, vis, rec))
                    return {};
            }
        }

        // Step 2: Topological Sort
        fill(vis.begin(), vis.end(), false);
        stack<int> st;

        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                dfs(i, adj, vis, st);
            }
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};