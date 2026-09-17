class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size())return false;
        vector<int> freqs(26,0);
        vector<int> freqt(26,0);

        for(int i=0;i<s.size();i++){
            freqs[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            freqt[t[i]-'a']++;
        }

        int k=0;

        for(int i=0;i<26;i++){
            if(freqs[i]==freqt[i]){
                k++;
            }
        }
        return freqs==freqt;

        
    }
};
