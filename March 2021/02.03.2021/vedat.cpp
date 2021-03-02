class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> um;
        for (auto& n: nums) um[n]++;
    
        vector<int> ans;
        for (auto x: um) {
            if (x.second == 2) {
                ans.push_back(x.first);
                break;
            }
        }
        for (int i=1; i<=nums.size(); i++) {
            if (!um.count(i)) {
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
