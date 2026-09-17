class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mpp;
        unordered_map<char,int> mp2;
        for(auto it : s1){
                mpp[it]++;
        }   
        int n=s1.size(),m=s2.size();
        int count=0;
        for(int i=0;i<m-n+1;i++){
            if(mpp.find(s2[i])!=mpp.end()){
                mp2=mpp;
                int cnt=0;
                for(int j=i;j<min(i+n,m);j++){
                    if(mp2.find(s2[j])!=mp2.end()){
                        cnt++;
                        mp2[s2[j]]--;
                        if(mp2[s2[j]]==0){
                            mp2.erase(s2[j]);
                        }
                    }
                    else
                        break;
                }
                if(cnt==n){
                    return true;
                }
            }
        }
        return false;
    }
};
