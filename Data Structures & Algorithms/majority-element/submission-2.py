class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count=1
        val=nums[0]

        for i in range(1,len(nums)):
            if nums[i]==val:
                count=count+1
            elif count==0:
                count=1
                val=nums[i]
            else:
                count=count-1
        
        return val