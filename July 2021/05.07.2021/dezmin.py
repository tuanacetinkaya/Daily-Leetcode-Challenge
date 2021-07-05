class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        
        col_i, row_i = 0, 0
        m, n = len(mat), len(mat[0])
        if r * c != m * n:
            return mat
        
        new_mat = [[0 for i in range(c)] for j in range(r)]
        for i in range(m):
            for j in range(n):
                new_mat[row_i][col_i] = mat[i][j]
                col_i += 1
                if col_i == c:
                    col_i = 0
                    row_i += 1
        
        return new_mat
