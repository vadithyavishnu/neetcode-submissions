class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> ans;

            int pro=1;
            int zero=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    zero++;
                    continue;
                }
                pro=pro*nums[i];
            }
            for(int i=0;i<nums.size();i++){
                if(zero>1){
                    ans.push_back(0);
                }
                else if(zero==1){
                    if(nums[i]==0){
                        ans.push_back(pro);
                    }
                    else{
                        ans.push_back(0);
                    }
                }
                else{
                    ans.push_back(pro/nums[i]);
                }
            }
            return ans;
    }
};
