class Solution {
public:
    int subtractProductAndSum(int n) {
        string s = to_string(n);
        long long sum = 0;
        long long product = 1;
        for (char c: s) {
            product *= c - '0';
            sum += c - '0';
        }
        
        return product - sum;
    }
};