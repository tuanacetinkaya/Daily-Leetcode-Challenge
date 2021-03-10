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
    void traverse(TreeNode* root, int curr_depth, int d, int v) {
        if (!root) {
            return;
        }
        
        if (d == curr_depth + 1) {
            auto left = root->left;
            auto right = root->right;
            root->left = new TreeNode(v);
            root->left->left = left;
            root->right = new TreeNode(v);
            root->right->right = right;
            return;
        }
        
        traverse(root->left, curr_depth + 1, d, v);
        traverse(root->right, curr_depth + 1, d, v);
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if (d == 1) {
            auto new_root = new TreeNode(v);
            new_root->left = root;
            return new_root;
        }
        traverse(root, 1, d, v);
        return root;
    }
};
