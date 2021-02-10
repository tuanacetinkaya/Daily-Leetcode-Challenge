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
    TreeNode* GG(vector<int>& nums, int s, int e) {
        if (s < 0 || e > nums.size() || e < 0 || s > nums.size()) {
            return NULL;
        }
        else {
            int maxVal = INT_MIN;
            int maxIdx = -1;
            for (int i=s; i<e; i++) {
                if (maxVal < nums[i]) {
                    maxVal = nums[i];
                    maxIdx = i;
                }
            }
            
            if (maxIdx == -1) {
                return NULL;
            } else {
                auto root = new TreeNode(maxVal);
                root->left = GG(nums, s, maxIdx);
                root->right = GG(nums, maxIdx + 1, e);
                return root;
            }
            
        }
        
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        auto root = new TreeNode;
        root = GG(nums, 0, nums.size());
        return root;
    }
    
};