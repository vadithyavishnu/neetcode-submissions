class Solution {
public:
    int maxArea(vector<int>& nums) {
        int area=0;
        int maxarea=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                area = min(nums[i],nums[j])* (j-i);
                maxarea=max(maxarea,area);
            }
        }
        return maxarea;
    }
};
