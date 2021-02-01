// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 1){
            return n;
        }
        int jumpCount = n/2;
        int currentNumber = 0;
        while(true){
            if(isBadVersion(currentNumber)){
                if(!isBadVersion(currentNumber-1)){
                    return currentNumber;
                    break;
                }
                currentNumber-=jumpCount;
            }
            else{
                currentNumber+=jumpCount;
            }
            if(jumpCount != 1)
            jumpCount /= 2;
        }
        return 0;
    }
};
