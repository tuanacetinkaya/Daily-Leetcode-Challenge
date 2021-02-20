class Solution {
    public int pivotIndex(int[] nums) {
        int total = 0;
        for (int num : nums) {
            total+= num;
        }
        
        
        int currentTotal = 0;
        for (int i = 0; i < nums.length; i++) {
            
            if (currentTotal == (total - nums[i] - currentTotal)) {
                return i;
            }
            currentTotal += nums[i];
        }
        return -1;
    }
}
