class Solution {
public:
    int sumOfDigits(int n) {
        int ret = 0;
        while (n) {
            ret += n % 10;
            n /= 10;
        }
        return ret;
    }
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int max_sum = 0;
        for (int i=1; i<=n; i++) {
            int sum = sumOfDigits(i);
            mp[sum]++;
            max_sum = max(max_sum, mp[sum]);
        }
        int ans = 0;
        for (const auto& x: mp) {
            if (x.second == max_sum)
                ans++;
        }
        return ans;
    }
};
