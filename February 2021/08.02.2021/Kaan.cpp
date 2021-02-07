class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    vector<int> result;
    int currentSum = 0;
    for(int i = 0 ; i<nums.size(); i++){
        currentSum+=nums.at(i);
        result.push_back(currentSum);
    }
        return result;
    }
};
