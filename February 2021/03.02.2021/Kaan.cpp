class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> map;
        int largest = 0;
        int largestSize = 0;
        for(int i = 1 ; i<=n;i++){
            string str = to_string(i);
            int sum = 0;
            for(int j = 0 ; j<str.length();j++){
                int x = (int)str[j] - 48;
                sum+=x;
            }
            map[sum] +=1;
            if(map[sum] > largestSize){
                largest = 1;
                largestSize = map[sum];
            }
            else if(map[sum] == largestSize){
                largest++;
            }
        }
        return largest;
    }
};
