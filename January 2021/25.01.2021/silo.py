class Solution {
    public int balancedStringSplit(String s) {
        int numberOfR = 0;
        int total = 0;
        for (char letter : s.toCharArray()) {
            if (letter == 'R') {
                numberOfR++;
            }
            else {
                numberOfR--;
            }
            if (numberOfR == 0) {
                total++;
            }
        }
        return total;
        
    }
}
