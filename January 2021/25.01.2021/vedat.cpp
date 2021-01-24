class Solution {
public:
    int balancedStringSplit(string s) {
        int ret = 0;
        int tmp = 0;
        for (char& c: s) {
            if (c == 'L') {
                tmp++;
            } else {
                tmp--;
            }
            if (tmp == 0) {
                ret++;
            }
        }
        return ret;
    }
};