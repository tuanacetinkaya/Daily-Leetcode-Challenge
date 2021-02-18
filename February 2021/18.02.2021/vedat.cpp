class Solution {
public:
    int countPrimes(int n) {
        int ret = 0;
        for (int k=2; k<n; k++) {
            bool ok = 1;
            for (int i=2; i<=sqrt(k); i++) {
                if (k % i == 0) {
                    ok = 0;
                    break;
                }
            }
            if (ok) ret++;
        }
        return ret;
    }
};
