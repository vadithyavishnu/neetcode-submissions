class Solution {
public:

    bool check(string s){
        int low=0;
        int high = s.size()-1;
        while(low<=high){
            if(s[low]!=s[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int low=0;
        int high=s.size()-1;

        while(low<=high){
            if(s[low]!=s[high]){
                string s1=s.substr(0,low)+s.substr(low+1);
                string s2=s.substr(0,high)+s.substr(high+1);
                return check(s1) || check(s2);
            }
            low++;
            high--;
        }
        return true;
    }
};