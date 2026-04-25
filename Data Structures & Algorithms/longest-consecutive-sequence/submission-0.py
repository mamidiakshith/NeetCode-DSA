class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        l=ml=0
        nums=sorted(nums)
        for i in range(1,len(nums)):
            if nums[i]-nums[i-1]==1:
                l+=1
            elif nums[i]-nums[i-1]==0:
                continue
            else:
                l=0
            ml=max(ml,l)
        return ml+1