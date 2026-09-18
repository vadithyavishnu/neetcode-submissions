class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j< min(ans.size(),strs[i].size())){
                if(ans[j]!=strs[i][j]){
                    break;
                }
                j++;
            }
            ans=ans.substr(0,j);
        }
        return ans;
    }
};