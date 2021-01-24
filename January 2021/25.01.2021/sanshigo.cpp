class Solution {
public:
    int balancedStringSplit(string s) {
    int Rcount = 0;
    int Lcount = 0;
    int result = 0;
    for (int i = 0; i<s.length(); i++){
        if (s[i] == 'R'){
            Rcount++;
        } else {
            Lcount++;
        }
        if (Rcount == Lcount) {
            result++;
            Rcount = 0;
            Lcount = 0;
        }
    }
    return result;
}
};
