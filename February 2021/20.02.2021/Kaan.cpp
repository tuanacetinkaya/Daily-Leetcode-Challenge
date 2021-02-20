class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long total = 0;
        for(int i = 0 ;i<nums.size();i++){
            
            total+=nums[i];
        }
        long long currentSum = 0 ;
        for(int i = 0 ; i<nums.size();i++){
            
            if((total - currentSum - nums[i]) == currentSum){
                return i;
            }
            currentSum+=nums[i];
        }
        return -1;
        
    }
};
