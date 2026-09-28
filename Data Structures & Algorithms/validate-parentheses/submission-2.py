class Solution:
    def isValid(self, s: str) -> bool:
        st = []

        for ch in s:
            if ch=='(' or ch=='[' or ch=='{':
                st.append(ch)
            else:
                if not st:
                    return False
                elif st[-1]=='(' and (ch=='}' or  ch==']'):
                    return False
                elif st[-1] == '{' and (ch == ']' or ch == ')'):
                    return False

                elif st[-1] == '[' and (ch == ')' or ch == '}'):
                    return False

                st.pop()
            
        if not st:
                return True
            
        return False
                
