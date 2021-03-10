class Solution {
public:
    string conv(int num, char one, char five, string four, string nine) {
        string ret = "";
        if (num) {
            if (num < 5) {
                if (num == 4) {
                    ret += four;
                } else {
                    for (int i=0; i<num; i++) {
                        ret.push_back(one);
                    }
                }
            } else if ( num > 5 ) {
                if (num == 9) {
                    ret += nine;
                } else {
                    ret.push_back(five);
                    for (int i=0; i<num-5; i++) {
                        ret.push_back(one);
                    }
                }
            } else {
                ret.push_back(five);
            }
        }
        return ret;
    }
    string intToRoman(int num) {
        int a, b, c, d;
        a =     num % 10;
        b = (   num / 10    )   % 10;
        c = (   num / 100   )   % 10;
        d = (   num / 1000  )   % 10;
        
        string ret = "";
        
        if (d) {
            // known that num < 4000
            for (int i=0; i<d; i++) {
                ret.push_back('M');
            }
        }
        ret += conv(c, 'C', 'D', "CD", "CM");
        ret += conv(b, 'X', 'L', "XL", "XC");
        ret += conv(a, 'I', 'V', "IV", "IX");
        return ret;
    }
};
