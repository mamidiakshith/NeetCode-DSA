class Solution:
    def maxDifference(self, s: str) -> int:
        m={}
        mo=me=0
        for i in s:
            m[i]=m.get(i,0)+1
        for i,j in m.items():
            if j%2==1:
                mo=max(mo,j)
            else:
                me=max(me,j)
        return mo-me

        