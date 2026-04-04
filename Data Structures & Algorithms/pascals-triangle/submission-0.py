class Solution:
    def rowgen(self,n):
        res=[]
        res.append(1)
        x=1
        for i in range(1,n):
            x*=(n-i)
            x//=i
            res.append(x)
        return res
    def generate(self, numRows: int) -> List[List[int]]:
        a=[]
        for i in range(1,numRows+1):
            b=self.rowgen(i)
            a.append(b)
        return a