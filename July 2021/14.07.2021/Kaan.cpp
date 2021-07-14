class Solution {
public:
    string customSortString(string order, string str) {
        unordered_set<char> charSet;  
        for(int i = 0 ; i<order.length();i++){
            charSet.insert(order[i]);
        }
        unordered_map<char,int> map;
        string result = "";
        for(int i = 0 ; i<str.length();i++){
            if(charSet.count(str[i])){
                map[str[i]]++;
            }
            else{
                result+=str[i];
            }
        }
        for(int i = 0 ;i<order.length();i++){
            if(map.count(order[i])){
                for(int j = 0 ; j< map[order[i]];j++){
                    result+=order[i];                }
            }
        }
        return result; 
    }
};
