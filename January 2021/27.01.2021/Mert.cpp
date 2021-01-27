#include <iostream>
#include <vector>
#include <numeric>

int sumOddLengthSubarrays(std::vector<int>& arr) {
    int sum = 0;
    int k = 0;
    for (int i = 0; i < arr.size() ; ++i) {
        for (int j = k; j < arr.size(); ++j) {
            if( (j - i + 1) % 2 == 1){
                sum += std::accumulate(arr.begin() + k, arr.begin() + j + 1 , 0);
            }
        }
        k++;
    }
    return sum;
}



int main() {
    std::vector<int> set = { 1,4,2,5,3};
    std::cout << sumOddLengthSubarrays(set);
}

