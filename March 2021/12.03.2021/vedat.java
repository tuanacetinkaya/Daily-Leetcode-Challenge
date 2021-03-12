class Solution {
    public boolean hasAllCodes(String s, int k) {
        HashSet<String> nums = new HashSet<String>();
        for (int i=k; i<=s.length(); i++) {
            System.out.println(s.substring(i - k, i));
            nums.add(s.substring(i - k, i));
        }
        return nums.size() == Math.pow(2, k);
    }
}
