class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        dictCheck = {}

        for i in range(0, len(nums)):
            if (nums[i] in dictCheck):
                return True
            
            else:

                dictCheck[nums[i]] = 1
        return False

         