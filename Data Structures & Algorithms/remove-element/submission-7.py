class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        ans=[]
        x=0
        for i  in range(len(nums)):
            if nums[i]==val:
                continue
            ans.append(nums[i])
        
        nums[:]=ans
        return len(ans)