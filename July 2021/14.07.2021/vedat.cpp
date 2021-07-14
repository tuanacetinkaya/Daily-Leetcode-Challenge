class Solution {
public:
    string customSortString(string order, string str) {
        unordered_map<int, int> mp;
        for (int i = 0; i < str.size(); i++) {
            mp[str[i]]++;
        }
        
        string ans = "";
        for (auto c: order) {
            ans += string(mp[c], c);
            mp[c] = 0;
        }
        for (auto p: mp) {
            ans += string(p.second, p.first);
        }
        return ans;
    }
};
