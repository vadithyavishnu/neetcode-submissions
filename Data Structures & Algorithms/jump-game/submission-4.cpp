class Solution {
public:
    bool dfs(int index,vector<int> & nums){
        if(index>= nums.size()-1){
            return true;
        }
        for(int jump=1;jump<=nums[index];jump++){
            if(dfs(index+jump,nums)){
                return true;
            }
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        return dfs(0,nums);
    }
};
