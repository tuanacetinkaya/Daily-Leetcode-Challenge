class Solution:
    def longestOnes(self, A: List[int], K: int) -> int:
        ones_zeros = [0, 0]
        max_length, current_length = 0, 0
        last_elem_index = 0
        
        for elem in A:
            ones_zeros[elem] += 1
            if ones_zeros[0] > K:
                ones_zeros[A[last_elem_index]] -= 1
                last_elem_index += 1
            else:
                current_length += 1
                max_length = max(max_length, current_length)
                
        return max_length
        