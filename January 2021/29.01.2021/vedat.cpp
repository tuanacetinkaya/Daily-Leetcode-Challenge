class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int ret = 0;
        for (int i=piles.size() - 2; i>=piles.size()/3 && i>=0; i-=2) {
            ret += piles[i];
        }
        return ret;
    } 
};