class Solution {
public:
    int balancedStringSplit(string s) {
    int result = 0;
    int count = 0;
    for(int i = 0 ; i<s.size() ; i++) {
        if(s[i] == 'R'){
            count+=1;
        }
        else{
            count+=-1;
        }
        if(count == 0){
            result+=1;
        }
    }
    return result;
    }
};
