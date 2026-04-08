class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        prefix=[]
        s=0
        for i in nums:
            s+=i
            prefix.append(s)
        suffix=[]
        nums=nums[::-1]
        s=0
        for i in nums:
            s+=i
            suffix.append(s)
        suffix=suffix[::-1]
        for i in range(len(prefix)):
            prefix[i]=suffix[i]-prefix[i]
        if 0 in prefix:
            return prefix.index(0)
        else:
            return -1