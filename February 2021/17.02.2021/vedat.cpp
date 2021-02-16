/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traverse(TreeNode* root, int currHeight, const int& height, int& ans) {
        if (!root) return;
        if (!root->left && !root->right && currHeight == height) {
            ans += root->val;
        }
        traverse(root->left, currHeight + 1, height, ans);
        traverse(root->right, currHeight + 1, height,ans);
    }
    int calcHeight(TreeNode* root) {
        if (!root) {
            return -1;
        }
        return max(calcHeight(root->left), calcHeight(root->right)) + 1;
    }
    int deepestLeavesSum(TreeNode* root) {
        auto height = calcHeight(root);
        int ans = 0;
        traverse(root, 0, height, ans);
        return ans;
    }
};
