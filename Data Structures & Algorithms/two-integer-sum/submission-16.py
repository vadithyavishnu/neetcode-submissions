class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = set()

        for i in range(len(nums)):
            x=nums[i]
            want=target-x
            if want in seen:
                return [nums.index(want),i]
            else:
                seen.add(nums[i])
        return [-1,-1]