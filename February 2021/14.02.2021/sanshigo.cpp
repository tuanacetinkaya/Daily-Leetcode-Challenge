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
    vector<int> inorder(TreeNode* root, vector<int> &vect) {
        if (root == nullptr) return vect;
        inorder(root->left, vect);
        vect.push_back(root->val);
        inorder(root->right, vect);
        return vect;
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> vect;
        inorder(root, vect);
        return vect[k-1];
    }
};
