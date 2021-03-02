class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
    
        unordered_set<int> set;
        int repeatingValue;
        int missingValue;

        for(int i = 0 ; i<nums.size();i++){
            if(set.count(nums[i])){
                repeatingValue = nums[i];
            }
            set.insert(nums[i]);
        }
        
        for(int i = 0 ; i<nums.size();i++){
            
            if(!set.count(i+1)){
                missingValue = i+1;
                break;
            }
        }
        
        vector<int> result;
        result.push_back(repeatingValue);
        result.push_back(missingValue);
        return result;
         
    
    }
};
