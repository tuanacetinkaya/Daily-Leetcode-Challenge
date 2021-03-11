class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        dp = [0] + [-1] * amount
        for i in range(1, len(dp)):
            min_arr = []
            for coin in coins:
                if i - coin >= 0 and dp[i - coin] != -1:
                    min_arr.append(dp[i-coin] + 1)
            
            dp[i] = min(min_arr) if len(min_arr) > 0 else -1
        
        return dp[amount]