class Solution:
    def countVowelPermutation(self, n: int) -> int:
        dp = [[0 for i in range(5)] for j in range(n)] # a e i o u
        
        for i in range(5):
            dp[0][i] = 1      
        
        for i in range(1, n):
            for j in range(5):
                if j == 0: # letter a
                    dp[i][j] = dp[i - 1][1] + dp[i - 1][4] + dp[i-1][2]
                elif j == 1: # letter e
                    dp[i][j] = dp[i - 1][0] + dp[i-1][2]
                elif j == 2: # letter i
                    dp[i][j] = dp[i - 1][1] + dp[i - 1][3]
                elif j == 3: # letter o
                    dp[i][j] = dp[i - 1][2]
                elif j == 4: # letter u
                    dp[i][j] = dp[i - 1][2] + dp[i - 1][3]
        
        return sum(dp[n-1]) % (10**9 + 7)
