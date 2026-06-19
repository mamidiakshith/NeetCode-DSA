class Solution:

    def encode(self, strs: List[str]) -> str:
        res=""
        for i in strs:
            res+= i+"999"
        return res

    def decode(self, s: str) -> List[str]:
        a=s.split('999')
        a.remove(a[-1])
        return a
