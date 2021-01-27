/*
Given an array of positive integers arr, calculate the sum of all possible odd-length subarrays.

A subarray is a contiguous subsequence of the array.

Return the sum of all odd-length subarrays of arr. 
*/


public class Solution 
{
    public int SumOddLengthSubarrays(int[] arr) 
    {
        int sum = 0;
        for (int i = 0; i<arr.Length ; i++)
        {
            int countOfIteratedObject = 0;
            int sumOfSubsets = 0;
            for (int j = i;j<arr.Length; j++){
                countOfIteratedObject++;
                sumOfSubsets += arr[j];
                if(countOfIteratedObject % 2 == 1) // check is subset lenght odd
                {
                    sum+= sumOfSubsets;
                }
            }
        }
        return sum;
    }
}