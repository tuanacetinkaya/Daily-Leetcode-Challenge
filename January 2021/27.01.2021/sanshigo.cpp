class Solution {
public:
int sumOddLengthSubarrays(vector<int>& arr) {
    int result = 0;
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr.size(); j++){
            if (i == j) {
                result += arr[i];
            } else if ((i+j)%2 == 0) {
                for(int k = i; k <= j; k++){
                    result += arr[k];
                }
            }
        }
    }
    return result;
}
};
