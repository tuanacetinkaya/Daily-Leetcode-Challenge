class Solution:
    def balancedStringSplit(self, s: str) -> int:
        #stack 
        total = 0
        count = 0
        kept  = s[0]
        for i, c in enumerate(s):
            
            if c == kept: 
                count += 1
            else:
                count -= 1
                if count == 0:
                    total += 1
                    kept = s[(i + 1) % len(s)]
        return total
