class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length() ){
            return false;
        }
        unordered_map<char,int> sMap;
        unordered_map<char,int> tMap;
        
        for(int i = 0 ; i<s.length() ;i++){
            sMap[s[i]]++;
        }
                
        for(int i = 0 ; i<t.length() ;i++){
            tMap[t[i]]++;
            if(tMap[t[i]] > sMap[t[i]] ){
                return false;
            }
        }
        return true;
    }
};
