class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_set<int> store(nums.begin(),nums.end());

        for(int num:nums){
            int str=0;
            int curr=num;
            while(store.find(curr)!=store.end()){
                str++;
                curr++;
            }
            res=max(res,str);
        }
        return res;
    }
};
