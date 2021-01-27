class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> pref;
        pref.push_back(0);
        for (int i=0; i<arr.size(); i++) {
            pref.push_back(arr[i] + pref[i]);
        }

        int ans = 0;
        for (int i=1; i<=arr.size(); i+=2) {
            for (int j=i; j<=arr.size(); j++) {
                ans += pref[j] - pref[j-i];
            }
        }
        return ans;
    }
};