class Solution {
public:
    int MOD = 1000000007;
    bool possib(int a, int b) {
        if      (a == 0)    return (b == 1);
        else if (a == 1)    return (b == 0) || (b == 2);
        else if (a == 2)    return (b != 2);
        else if (a == 3)    return (b == 2) || (b == 4);
        else if (a == 4)    return (b == 0);
        else return true;
    }
        
    int countVowelPermutation(int n) {
        vector<vector<int>> dp(n, vector<int>(5));
        fill(dp[0].begin(), dp[0].end(), 1);
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                for (int k = 0; k < 5; k++) {
                    dp[i][j] += possib(k, j) * dp[i - 1][k];
                    dp[i][j] %= MOD;
                }
            }
        }
        int ans = 0;
        for (int j = 0; j < 5; j++) {
            ans += dp[n-1][j];
            ans %= MOD;
        }
        return ans;
    }
};
