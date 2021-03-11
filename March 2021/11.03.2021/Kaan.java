class Solution {    
    public int coinChange(int[] coins, int amount) {
        
        int[] dpArray = new int[amount+1];
        Arrays.fill(dpArray, Integer.MAX_VALUE);
        dpArray[0] = 0;
        
        for(int i = 0 ; i<coins.length;i++){
            for(int j = coins[i] ; j<=amount;j++){
                if(dpArray[j-coins[i]] != Integer.MAX_VALUE){
                    dpArray[j] = Math.min(dpArray[j-coins[i]] + 1 , dpArray[j]);    
                }
            }
            
        }
        
        if(dpArray[amount] == Integer.MAX_VALUE){
            return -1;
        }
        return dpArray[amount];
        
        
        
    }
}
