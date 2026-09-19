class Solution:

    def encode(self, strs: List[str]) -> str:
        ans=""
        if len(strs)==0:
            return ans
        
        for st in strs:
            ans+=str(len(st))+'#'+st
        
        return ans

    def decode(self, s: str) -> List[str]:
        ans=[]

        if len(s)==0:
            return ans

        i=0
        while i<len(s):
            j=i
            while s[j]!='#':
                j+=1
            length=int(s[i:j])
            word = s[j+1:j+1+length]
            i=j+1+length
            ans.append(word)
        
        return ans
