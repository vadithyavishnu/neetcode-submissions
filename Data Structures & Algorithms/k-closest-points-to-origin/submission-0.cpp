class Solution {
public:
    double dist(int x1,int y1,int x2,int y2){
        return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<double,int> , vector<pair<double,int>>, greater<pair<double,int>>> pq;

        for(int i=0;i<points.size();i++){
            double a=dist(points[i][0],points[i][1],0,0);
            pq.push({a,i});
        }

        while(k--){
            auto temp=points[pq.top().second];
            ans.push_back(temp);
            pq.pop();
        }
        return ans;

    }
};
