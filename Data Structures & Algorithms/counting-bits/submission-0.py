class Solution:
    def countBits(self, n: int) -> List[int]:
        s=[]
        for i in range(n+1):
            num=bin(i).count('1')
            s.append(num)
        return s