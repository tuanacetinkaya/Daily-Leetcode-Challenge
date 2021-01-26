class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        long long result = 0;
        for(int i = 0 ; i<arr.size();i++){
            for(int j = i;j<arr.size()+1;j++){
                if((j-i)%2 !=0){
                    for(int k = i ; k<j ; k++){
                        result+=arr[k];
                    }
                }
            }
        }
        return result;
    }
};
