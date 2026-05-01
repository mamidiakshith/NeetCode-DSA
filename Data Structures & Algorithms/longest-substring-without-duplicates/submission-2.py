class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)==0:
            return 0
        m=set()
        r=l=0
        maxi=0
        while r<len(s):
            while s[r] in m:
                m.remove(s[l])
                l+=1
            m.add(s[r])
            r+=1
            maxi=max(maxi,r-l+1)
        return maxi-1

