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
    void gg(vector<int>& vec, TreeNode* root) {
        if (!root) {
            return;
        }
        gg(vec, root->left);
        vec.push_back(root->val);
        gg(vec, root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        gg(vec, root);
        return vec;
    }
};
