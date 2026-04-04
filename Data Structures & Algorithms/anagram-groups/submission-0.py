class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        a=[]
        vist=[False]*len(strs)
        flag=False
        for i in range(len(strs)):
            if vist[i]:
                continue
            b=[strs[i]]
            vist[i]=True
            for j in range(i+1,len(strs)):
                if sorted(strs[i])==sorted(strs[j]) and not vist[j]:
                    b.append(strs[j])
                    vist[j]=True
            a.append(b)
        return a
