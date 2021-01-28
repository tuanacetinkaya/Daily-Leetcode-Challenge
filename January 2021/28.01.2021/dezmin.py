class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        total_sec = 0
        for i in range(1, len(points)):
            point1 = points[i - 1]
            point2 = points[i]
            
            x_dif = abs(point2[0] - point1[0])
            y_dif = abs(point2[1] - point1[1])
            
            diago = min(x_dif, y_dif)            
            total_sec += diago
            x_dif -= diago
            y_dif -= diago
            
            total_sec += x_dif + y_dif
        
        return total_sec