/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public class Pair {
        long first;
        long second;
        Pair(long first, long second) {
            this.first = first;
            this.second = second;
        }
    }
    public TreeMap<Integer, Pair> sums = new TreeMap<Integer, Pair>();
    
    public void traverse(TreeNode root, int depth) {
        if (root == null) {
            return;
        }
        long count = 1;
        long sum = root.val;
        if (sums.containsKey(depth)) {
            count += sums.get(depth).second;
            sum += sums.get(depth).first;
        }
        sums.put(depth, new Pair(sum, count));
        traverse(root.left, depth + 1);
        traverse(root.right, depth + 1);
    }
    
    public List<Double> averageOfLevels(TreeNode root) {
        ArrayList<Double> ans = new ArrayList<Double>(sums.size());
        traverse(root, 0);
        for (var x: sums.keySet()) {
            ans.add(sums.get(x).first * 1.0 / sums.get(x).second);
        }
        return ans;
    }
    
}
