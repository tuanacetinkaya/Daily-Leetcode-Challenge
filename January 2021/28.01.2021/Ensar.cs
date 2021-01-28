
public class Solution {
    public int MinTimeToVisitAllPoints(int[][] points) {
        int totalSecond = 0;
        for(int i = 1; i < points.Length ; i++){
            int differenceOfX = Math.Abs(points[i][0] - points[i-1][0]);
            int differenceOfY = Math.Abs(points[i][1] - points[i-1][1]);
            totalSecond += Math.Max(differenceOfX, differenceOfY);
        }
        return totalSecond;
    }
}