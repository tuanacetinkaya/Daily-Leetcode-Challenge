class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        current_state = []
        next_state = []
        time = 0
        for i in range(len(points)-1):
            vert = abs(points[i+1][0]-points[i][0])
            hori = abs(points[i+1][1]-points[i][1])
            if abs(vert) < abs(hori):
                time += abs(hori-vert) + abs(vert)
            else:
                time += abs(vert-hori) + abs(hori)
        return time