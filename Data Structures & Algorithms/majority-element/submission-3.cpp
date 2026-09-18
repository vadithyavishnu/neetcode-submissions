class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int val=nums[0];

        for(int i=1;i<nums.size();i++){
            if(val==nums[i]){
                count++;
            }
            else if (count==0){
                count=1;
                val=nums[i];
            }
            else {
                count--;
            }
        }
        return val;
    }
};