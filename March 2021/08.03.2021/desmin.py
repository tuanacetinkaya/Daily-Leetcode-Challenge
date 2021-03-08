class Solution:   
    def removePalindromeSub(self, s: str) -> int:
        n = len(s)
        
        if n == 0:
            return 0
        elif s == s[::-1]:
            return 1
        else:
            return 2      