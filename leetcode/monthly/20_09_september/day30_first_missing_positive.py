class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums = set(nums + [0])
        for i in range(len(nums)):
            if i not in nums:
                return i
            
        return len(nums)
