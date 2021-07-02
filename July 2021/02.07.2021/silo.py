class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        queue = []
        for i in range(len(arr)):
            if (len(queue) == k ):
                if abs(queue[0] - x ) > abs(arr[i] - x):
                    queue.pop(0)
                    queue.append(arr[i])
            else:
                queue.append(arr[i])
        return queue
