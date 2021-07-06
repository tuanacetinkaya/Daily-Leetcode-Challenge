class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> um;
        for (int x: arr) um[x]++;
        
        priority_queue<int> pq;
        for (auto x: um) {
            pq.push(x.second);
        }
        int ss = 0;
        int k = 0;
        while (ss < arr.size() / 2) {
            ss += pq.top();
            pq.pop();
            k++;
        }
        return k;
    }
};
