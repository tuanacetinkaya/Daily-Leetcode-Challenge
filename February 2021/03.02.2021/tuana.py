class Solution:
    def sumDig(self, n):
        digSum = 0
        while n:
            digSum += n % 10
            n //= 10
        return digSum
    def countLargestGroup(self, n: int) -> int:
        sums = [0] * 37
        for i in range(1,n+1):
            sums[self.sumDig(i)] += 1
            
        maxSum = 0
        count = 0
        for i in sums:
            if i > maxSum:
                maxSum = i
                count = 1
            elif i == maxSum:
                count += 1
        return count
