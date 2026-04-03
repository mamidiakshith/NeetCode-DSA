class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        a=[]
        w=sorted(words,key=len)
        for i in range(len(w)):
            for j in range(i+1,len(w)):
                if w[i]in w[j]:
                    a.append(w[i])
                    break
        return a
