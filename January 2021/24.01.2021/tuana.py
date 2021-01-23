class Solution:
    def subtractProductAndSum(self, n: int) -> int:

        proDigit, sumDigit = 1 , 0
        for d in str(n):
            proDigit *= int(d)
            sumDigit += int(d)
            
        return proDigit - sumDigit
        
