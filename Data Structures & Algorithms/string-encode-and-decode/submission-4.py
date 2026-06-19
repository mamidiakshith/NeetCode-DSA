class Solution:

    def encode(self, strs: List[str]) -> str:
        res=""
        for i in strs:
            res+=i+"akshi"
        res=res[:-5]
        return res

    def decode(self, s: str) -> List[str]:
        a=s.split('akshi')
        return a
