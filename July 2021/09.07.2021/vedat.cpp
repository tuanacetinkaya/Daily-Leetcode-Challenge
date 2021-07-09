class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1));
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            int curr_max = 1;
            dp[i][i] = 1;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] > nums[i]) {
                    dp[i][j] = dp[j][n] + 1;
                    curr_max = max(curr_max, dp[i][j]);
                }
            }
            dp[i][n] = curr_max;
            ans = max(ans, curr_max);
        }
        return ans;
    }
};
