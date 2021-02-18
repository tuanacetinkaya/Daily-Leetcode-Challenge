class Solution {
public:
    int countPrimes(int n) {
        
        if(n<=2){
            return 0;
        }
        
        vector<int> primes;
        
        primes.push_back(2);

        for(int i = 3 ; i<n;i++){
            
            bool prime = true;
            for(int j = 0 ; j<primes.size();j++){
                if(i%primes[j] == 0){
                    prime = false;
                    break;
                }
                if(primes[j] * primes[j]  > i){
                    break;
                }
                
            }
            if(prime){
                primes.push_back(i);
            }
            
        }
        
        return primes.size();
        
        
        
    }
};
