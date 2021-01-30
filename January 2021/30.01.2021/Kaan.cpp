class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        long long currentCount = 0;
        for(int i = 0 ; i<arr.size()-m;i++){
            if(arr[i] == arr[i+m]){
                currentCount++;
                if(currentCount ==(k-1)*m){
                    return true;
                }
            }
            else{
                currentCount = 0;
            }
        }
        return false;
    }
};
