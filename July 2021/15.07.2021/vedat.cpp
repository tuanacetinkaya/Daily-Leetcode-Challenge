class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        for (int i = n - 1; i>1; i--) {
            int start = 0;
            int end = i - 1;
            int c = nums[i];
            while (start < end) {
                if (nums[start] + nums[end] > c) {
                    ans += end - start;
                    end--;
                }
                else if (nums[start] + nums[end] <= c) {
                    start += 1;
                }
            }
        }
        return ans;
    }
};
