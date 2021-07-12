class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        
        if(s.length() != t.length()){
            return false;
        }
        
        
        unordered_map<char,char> charMap;
        unordered_set<char> usedChars;
        
        string result = "";
        
        for(int i =0;i<s.length();i++){
            
            if(charMap.count(s[i])){
                result+= charMap[s[i]];
            }
            else if(usedChars.count(t[i])){
                return false;
            }
            else{
                charMap[s[i]] = t[i];
                usedChars.insert(t[i]);
                result+=t[i];
            }
            
            
            
        }        
        
        
        return result == t;
        
        
        
    }
};
