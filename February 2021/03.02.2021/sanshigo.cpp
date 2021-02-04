class Solution {
public:
    int sumOfDigits(int n) {
        int sum=0;
        while(n > 0)
        {
            sum += n % 10;
            n = n / 10;
        }
        return sum;
    }
    
    int countLargestGroup(int n) {
        int max = 0;
        vector<int> digitSums(37,0);
        int count=0;
        for(int i=1; i <= n; i++) {
            int temp = sumOfDigits(i);
            digitSums[temp]++;
            if(digitSums[temp] > max)
                max = digitSums[temp];
        }
        for(int i=0; i<digitSums.size(); i++) {
            if(digitSums[i] == max)
                count++;
        }
        return count;
    }
};
