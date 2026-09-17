class Solution {
public:
    int maxArea(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int area=0;
        int maxarea=0;
        while(l<r){
            area=min(nums[l],nums[r])*(r-l);
            maxarea=max(maxarea,area);
            if(nums[l]<=nums[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxarea;
    }
};
