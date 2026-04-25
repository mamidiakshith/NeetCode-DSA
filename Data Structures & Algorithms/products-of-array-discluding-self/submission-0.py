class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        b=[]
        for i in range(len(nums)):
            p=1
            for j in range(len(nums)):
                if i==j:
                    continue
                else:
                    p*=nums[j]
            b.append(p)
        return b