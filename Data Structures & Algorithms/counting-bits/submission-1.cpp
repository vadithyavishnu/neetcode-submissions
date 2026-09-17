class Solution {
public:
    int one(int n){
        int res=0;
        while(n>0){
            res+=(n&1);
            n=n>>1;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(one(i));
        }
        return ans;
    }
};
