class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        m=set()
        r=l=0
        maxi=0
        while r<len(s):
            if s[r] not in m:
                m.add(s[r])
            else:
                l=r
            r+=1
            maxi=max(maxi,r-l+1)
        return maxi-1

