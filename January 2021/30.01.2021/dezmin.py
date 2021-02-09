class Solution:
    def containsPattern(self, arr: List[int], m: int, k: int) -> bool:
        repeat = 0
        for i in range(len(arr) -m):
            if (arr[i] == arr[i + m]):
                repeat += 1
                if (repeat % m == 0 and repeat // m == k - 1):
                    return True
            else:
                repeat = 0
        return False