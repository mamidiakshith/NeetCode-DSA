class Solution:

    def encode(self, strs: List[str]) -> str:
        res=""
        for i in strs:
            res+= i+"#"
        return res

    def decode(self, s: str) -> List[str]:
        a=s.split('#')
        a.remove(a[-1])
        return a
