class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:

        sum_of_odd = 0

        for i in range(1, len(arr), 2):
            for j in range(len(arr) - i + 1):
                sum_of_odd += sum(arr[j:j + i])
        if len(arr) % 2 == 1:
            sum_of_odd += sum(arr)

        return sum_of_odd
