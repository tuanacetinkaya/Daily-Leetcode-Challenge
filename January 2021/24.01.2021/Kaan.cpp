class Solution {
public:
    int subtractProductAndSum(int n) {
        std::string str = to_string(n);
        long long product= 1;
        long long sum = 0; 
        for(int i= 0 ; i<str.length();i++){  
            int n = (int)str[i] - 48;
            product *= n;
            sum+=n;
        }
        return product -sum;
    }
};
