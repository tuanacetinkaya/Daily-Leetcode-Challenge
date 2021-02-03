// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left = 1, right = n, mid;
        bool curr_ver, prev_ver, next_ver;
        while (right >= left) {
            mid = left + (right - left) / 2;
            curr_ver = isBadVersion(mid);
            prev_ver = isBadVersion(mid - 1);
            next_ver = isBadVersion(mid + 1);
            if (!prev_ver && curr_ver) 
                return mid;
            else if (!curr_ver && next_ver)
                return mid + 1;
            if (!curr_ver) {
                left = mid + 1;
            }
            else if (curr_ver) {
                right = mid - 1;
            }
        }
        return mid;
    }
};
