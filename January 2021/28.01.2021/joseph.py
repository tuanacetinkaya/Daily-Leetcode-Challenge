class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        vertical, horizontal, total = 0, 0, 0
        for i in range(len(points)-1):
            vertical = abs(points[i][0] - points[i+1][0])
            horizontal = abs(points[i][1] - points[i+1][1])
            total += max(vertical, horizontal)
        return total