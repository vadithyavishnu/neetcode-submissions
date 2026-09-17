class Solution {
public:
    bool isCycle(int src, vector<vector<int>>& adj, vector<bool>& vis,
                 vector<bool>& rec) {

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

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        // Build graph
        for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }

        vector<bool> vis(numCourses, false);
        vector<bool> rec(numCourses, false);

        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                if (isCycle(i, adj, vis, rec))
                    return false;
            }
        }

        return true;
    }
};