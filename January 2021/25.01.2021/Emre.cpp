class Solution {
public:
    int balancedStringSplit(string s) {
        int num_R = 0;
        int num_L = 0;
        int counter = 0;
        for(char c: s){
            if(c == 'R') {
                num_R++;
            }
            else {
                num_L++;
            }
            if(num_R == num_L) {
                counter++;
                num_L = 0;
                num_R = 0;
            }
        }
        return counter;
    }
};
