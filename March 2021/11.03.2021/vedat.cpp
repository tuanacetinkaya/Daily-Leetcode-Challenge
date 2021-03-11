class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        
        for (int j=1; j<=amount; j++) {
            for (int i=0; i<coins.size(); i++) {
                if (j >= coins[i] && dp[j - coins[i]] != INT_MAX) {
                    dp[j] = min(dp[j - coins[i]] + 1, dp[j]); 
                }
            } 
        }
        return dp[amount] != INT_MAX ? dp[amount] : -1;
    }
};
