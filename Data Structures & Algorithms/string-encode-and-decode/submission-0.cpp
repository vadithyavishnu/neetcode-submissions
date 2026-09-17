class Solution {
public:

    string encode(vector<string>& strs) {
            string ans="";
            if(strs.size()==0){
                return ans;
            }

            for(auto str:strs){
                ans+=to_string(str.size())+'#'+str;
            }
            return ans;

    }

    vector<string> decode(string s) {
        vector<string> ans;

        if(s.size()==0){
            return ans;
        }
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }

            int len=stoi(s.substr(i,j-i));
            string word=s.substr(j+1,len);
            ans.push_back(word);
            i=j+1+len;
        }
        return ans;


    }
};
