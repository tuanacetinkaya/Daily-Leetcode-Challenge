public class Solution {
    public bool ContainsPattern(int[] arr, int m, int k) {
        int numberOfPair = 1;
        for (int i = 0; i < arr.Length - m ; i++){
            if(arr[i] == arr[i+m]) numberOfPair++;
            else numberOfPair = 1;
            Console.WriteLine(numberOfPair);
            if (numberOfPair >  m*k - m) return true;
        }
        return false;
    }
}