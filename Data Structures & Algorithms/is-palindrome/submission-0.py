class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.replace(' ','')
        s=s.lower()
        result = ''.join(ch for ch in s if ch.isalnum())
        result=result.lower()
        return result==result[::-1]