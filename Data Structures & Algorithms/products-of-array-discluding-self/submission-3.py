class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans = []
        pro=1
        zero=0
        for num in nums:
            if num==0:
                zero=zero+1
                continue
            
            pro=pro*num
        
        for i in range(len(nums)):
            if zero > 1:
                ans.append(0)
            elif zero==1:
                if nums[i]==0:
                    ans.append(pro)
                else:
                    ans.append(0)
            else:
                ans.append(pro//nums[i])
        
        return ans
