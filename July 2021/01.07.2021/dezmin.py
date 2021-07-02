class Solution:
    def grayCode(self, n: int) -> List[int]:
        arr = [0, 1]
        for i in range(2, n+1):
            m = len(arr) - 1
            for k in range(m + 1):
                arr.append(arr[m-k] + 2**(i-1))
        return arr
