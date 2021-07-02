class Solution {
public:
    void printMap(map<int, vector<int>> mp) {
        auto it = mp.begin();
        while (it != mp.end()) {
            auto vec = it->second;
            cout << it->first << " : ";
            for (int i = 0; i < vec.size(); i++) {
                cout << vec[i] << ' ';
            }
            cout << '\n';
            it++;
        }
    }
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        map<int, vector<int>> mp;
        for (int v: arr) {
            int dist = abs(x - v);
            mp[dist].push_back(v);
        }
        // printMap(mp);
        auto it = mp.begin();
        vector<int> ans;
        for (int i = 0; i < k && it != mp.end(); i++, it++) {
            auto vec = it->second;
            size_t lf = k - ans.size();
            for (int j = 0; j < min(vec.size(), lf); j++) 
                ans.push_back(vec[j]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
