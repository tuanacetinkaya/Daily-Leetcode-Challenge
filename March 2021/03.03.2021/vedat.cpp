class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k = nums.size();
        long ans = k * (k+1) /2;
        for (int& i: nums) {
            ans -= i;
        }
        return ans;
    }
};
