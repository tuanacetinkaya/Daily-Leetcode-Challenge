class Solution:
    def balancedStringSplit(self, s: str) -> int:
        total_count = 0
        total_r = 0
        for c in s:
            if c == 'R':
                total_r += 1
            elif c == 'L':
                total_r -= 1            
            if (total_r == 0):
                total_count += 1
        return total_count