class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        time = 0
        for i in range(len(points) - 1):
            xDif = abs(points[i+1][0] - points[i][0])
            yDif = abs(points[i+1][1] - points[i][1])
            diagonal = min(xDif, yDif)
            remain = abs(xDif - yDif)
            time += diagonal + remain
            
        return time
