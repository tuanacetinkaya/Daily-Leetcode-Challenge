class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) {
        vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1));
        
        int ans = 0;
        for (int i = 1; i <= a.size(); i++) {
            for (int j = 1; j <= b.size(); j++) {
                if (a[i-1] == b[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                ans = max(ans, dp[i][j]);
            }
        }
        return ans;
        
    }
};
