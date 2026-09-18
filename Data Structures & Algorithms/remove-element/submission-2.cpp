class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;

        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                x++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                x--;
                continue;
            }
            ans.push_back(nums[i]);
        }
        nums=ans;
        return nums.size()-x;
    }
};