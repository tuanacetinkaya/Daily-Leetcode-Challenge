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
    void inorder(vector<int>& list,TreeNode* root){
        if(root == nullptr){
            return;
        }
        inorder(list,root->left);
        list.push_back(root->val);
        inorder(list,root->right);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> list;
        inorder(list,root);
        return list[k-1];
    }
};
