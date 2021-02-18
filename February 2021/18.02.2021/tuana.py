class Solution:
    def isPrime(self, n):
        if n%2 == 0:
            return False
        for i in range(3, int(sqrt(n))+1,2):
            if n%i == 0:
                return False
        return True
    
    def countPrimes(self, n: int) -> int:
        hititli = 1 if n > 2 else 0
        for i in range(3, n, 2):
            hititli += 1 if self.isPrime(i) else 0
        return hititli
