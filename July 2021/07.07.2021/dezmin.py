class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        arr = []
        n = len(matrix)
        for i in range(n):
            for j in range(n):
                arr.append(matrix[i][j])
                
        return sorted(arr)[k-1]
