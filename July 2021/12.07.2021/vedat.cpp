class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_set<char> did;
        for (int i = 0; i < s.size(); i++) {
            if (mp.count(s[i])) {
                if (mp[s[i]] != t[i])
                    return false;
            } else {
                if (did.count(t[i])) 
                    return false;
                mp[s[i]] = t[i];
                did.insert(t[i]);
            }
        }
        return true;
    }
};
