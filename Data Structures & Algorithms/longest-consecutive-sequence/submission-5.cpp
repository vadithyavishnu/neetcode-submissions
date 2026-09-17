class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int res=0;
        int curr=nums[0];
        int str=0;
        int i=0;
        while(i<nums.size()){
            if(curr!=nums[i]){
                curr=nums[i];
                str=0;
            }
            while(i<nums.size() && nums[i]==curr){
                i++;
            }
            str++;
            curr++;
            res=max(res,str);
        }
        return res;
    }
};
