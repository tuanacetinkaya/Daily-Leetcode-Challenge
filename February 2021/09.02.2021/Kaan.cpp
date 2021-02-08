class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            vector<bool> result;
    int greatest = 0;
    for(int i = 0 ; i<candies.size(); i++){
        if(greatest<candies.at(i)){
            greatest = candies.at(i);
        }
    }
    for(int i = 0 ; i<candies.size(); i++){
        if(candies.at(i)+extraCandies >= greatest){
            result.push_back(true);
        } else{
            result.push_back(false);
        }
    }
        return result;
    }
};
