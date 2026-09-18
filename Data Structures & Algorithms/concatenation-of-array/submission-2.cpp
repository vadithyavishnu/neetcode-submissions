class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n2=2*(nums.size());
        vector<int> ans(n2);
        int n=nums.size();
        for(int i=0;i<2*n;i++){
            if(i>=n){
                ans[i]=nums[i-n];
            }
            else{
                ans[i]=nums[i];
            }
        }
        return ans;
    }
};