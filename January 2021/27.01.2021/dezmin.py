class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        subArrlen = 0
        total_sum = 0
        while 2 * subArrlen + 1 <= len(arr):
            size_arr = 2 * subArrlen + 1
            total_sub_b = 0
            # init total
            for i in range(size_arr):
                total_sub_b += arr[i]
                
            total_sum += total_sub_b
            
            for i in range(size_arr, len(arr)): 
                total_sub_a = total_sub_b
                total_sub_a -= arr[i - size_arr]
                total_sub_a += arr[i]
                total_sum += total_sub_a
                total_sub_b = total_sub_a
            
            subArrlen += 1
        return total_sum