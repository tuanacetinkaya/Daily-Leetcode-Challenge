class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int start_idx = 0;
        while (start_idx <= arr.size() - m) {
            int ct = m;
            for (int i=start_idx + m; i<arr.size(); i++) {
                if (arr[i] == arr[i - m]) {
                    ct++;
                } else {
                    break;
                }
            }
            if (ct >= k * m) return true;
            start_idx++;
        }
        return false;
    }
};
