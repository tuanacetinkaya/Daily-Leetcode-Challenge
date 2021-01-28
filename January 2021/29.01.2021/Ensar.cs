public class Solution {
    public int MaxCoins(int[] piles) {
        Array.Sort(piles); 
        int numberOfCoin = piles.Length / 3;
        int myTotalCoin = 0;
        int index = piles.Length-2;
        for(int i = 0 ; i < numberOfCoin; i++){
            myTotalCoin += piles[index];
            index-=2;
        }
        return myTotalCoin;
    }
}