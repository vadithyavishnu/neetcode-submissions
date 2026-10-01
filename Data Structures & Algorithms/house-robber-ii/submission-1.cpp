class Solution {
public:
    int robrange(vector<int> &nums,int low,int high){
        int prev2=0;
        int prev1=0;

        for(int i=low;i<=high;i++){
            int take=nums[i]+prev2;
            int skip=prev1;

            int cur=max(take,skip);
            prev2=prev1;
            prev1=cur;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        int ans=max(robrange(nums,0,n-2),robrange(nums,1,n-1));
        return ans;
    }
};
