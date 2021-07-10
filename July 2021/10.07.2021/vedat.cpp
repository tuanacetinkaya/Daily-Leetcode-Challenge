class Solution {
public:
    int M = 1000000007;
    int numDecodings(string s) {
        long first = 1, second = s[0] == '*' ? 9 : s[0] == '0' ? 0 : 1;
        for (int i = 1; i < s.length(); i++) {
            long temp = second;
            if (s[i] == '*') {
                second = 9 * second % M;
                if (s[i - 1] == '1')
                    second = (second + 9 * first) % M;
                else if (s[i - 1] == '2')
                    second = (second + 6 * first) % M;
                else if (s[i - 1] == '*') 
                    second = (second + 15 * first) % M;
            } else {
                second = s[i] != '0' ? second : 0;
                if (s[i - 1] == '1')
                    second = (second + first) % M;
                else if (s[i - 1] == '2' && s[i] <= '6')
                    second = (second + first) % M;
                else if (s[i - 1] == '*')
                    second = (second + (s[i] <= '6' ? 2 : 1) * first) % M;
            }
            first = temp;
        }
        return (int) second;
    }
};
