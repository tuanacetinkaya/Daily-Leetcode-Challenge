class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        total= 0
        for i in range(1,len(arr)+1,2):
            for j in range(0,len(arr)-i+1):
                for k in range(i):
                    total += arr[j+k]
        return total