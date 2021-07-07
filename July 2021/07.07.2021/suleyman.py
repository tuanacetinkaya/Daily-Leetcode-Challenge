class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        from queue import PriorityQueue

        q = PriorityQueue()
        
        for row in matrix:
            for element in row:
                q.put(element)
        
        counter = 0
        while not q.empty():
            counter += 1
            next_item = q.get()            
            if counter == k:
                return next_item
