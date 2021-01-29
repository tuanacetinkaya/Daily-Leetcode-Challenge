class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int index = piles.size()-2;
        int result = 0;
        for(int i = 0; i < piles.size()/3; i++){
            result += piles[index];
            index -= 2;
        }
        return result;
    }
};
