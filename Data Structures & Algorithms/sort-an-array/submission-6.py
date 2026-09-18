class Solution:

    def sortArray(self, nums: List[int]) -> List[int]:

        def merge(nums, low, mid, high):
            i = low
            j = mid + 1
            temp = []

            while i <= mid and j <= high:
                if nums[i] <= nums[j]:
                    temp.append(nums[i])
                    i += 1
                else:
                    temp.append(nums[j])
                    j += 1

            while i <= mid:
                temp.append(nums[i])
                i += 1

            while j <= high:
                temp.append(nums[j])
                j += 1

            for k in range(len(temp)):
                nums[low + k] = temp[k]

        def mergeSort(nums, low, high):
            if low < high:
                mid = low + (high - low) // 2

                mergeSort(nums, low, mid)
                mergeSort(nums, mid + 1, high)

                merge(nums, low, mid, high)

        mergeSort(nums, 0, len(nums) - 1)

        return nums