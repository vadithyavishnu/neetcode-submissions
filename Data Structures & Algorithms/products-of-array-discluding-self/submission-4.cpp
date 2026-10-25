class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> ans(nums.size(),1);
            int pro=1;
            for(int i=0;i<nums.size();i++){
                ans[i]=pro;
                pro=pro*nums[i];
            }
            pro=1;
            for(int i=nums.size()-1;i>=0;i--){
                ans[i]=ans[i]*pro;
                pro=pro*nums[i];
            }
            return ans;
    }
};
