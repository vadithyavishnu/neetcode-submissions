class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for( auto &it :mp){
            pq.push({it.second,it.first});
        }
        while(k--){
            int x=pq.top().second;
            ans.push_back(x);
            pq.pop();
        }
        return ans;
    }
};
