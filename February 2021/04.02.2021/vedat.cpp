class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if (a.size() < b.size()) {
            while (a.size() < b.size()) {
                a.push_back('0');
            }
        } else {
            while (a.size() > b.size()) {
                b.push_back('0');
            }
        }
        string ret;
        int flag = 0;
        for (int i=0; i<a.size(); i++) {
            int a_val = a[i] - '0';
            int b_val = b[i] - '0';
            ret.push_back( ( a_val ^ b_val ^ flag ) + '0' );
            flag = (a_val & b_val) | (a_val & flag) | (b_val & flag);
        }
        if (flag) {
            ret.push_back( flag + '0' );
        }
        
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
