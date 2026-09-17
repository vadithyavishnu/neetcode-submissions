class Solution {
public:
    bool isValid(string s) {
      
        stack<char> st;
        for(char ch:s){
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if(st.top()=='(' && (ch==']' || ch=='}')){
                    return false;
                }
                else if(st.top()=='{' && (ch==']' || ch==')')){
                    return false;
                }
                else if(st.top()=='[' && (ch==')' || ch=='}')){
                    return false;
                }
                st.pop();
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
       
    }
};
