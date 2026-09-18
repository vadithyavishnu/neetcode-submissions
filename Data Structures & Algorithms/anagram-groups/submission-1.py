class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = []
        mp={}

        for st in strs:
            temp=sorted(st)
            temp=''.join(temp)

            if temp not in mp:
                mp[temp]=[]
            
            mp[temp].append(st)
        
        for key in mp:
            result.append(mp[key])
        
        return result