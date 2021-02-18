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
    int findDepth(int currentDepth , TreeNode* currentNode){
        
        if(currentNode == NULL){
          
            return currentDepth;
        }

        return max(findDepth(currentDepth+1,currentNode->right),findDepth(currentDepth+1,currentNode->left));

    }
    
    int traverse(int currentDepth , TreeNode* currentNode  , int maxDepth){
        
        if(currentNode == NULL){
            return 0;
        }
        else if(currentDepth + 1 == maxDepth ){
            return currentNode->val;
        }
        
       return traverse(currentDepth+1,currentNode->right ,maxDepth) + traverse(currentDepth+1,currentNode->left ,maxDepth);
        
    }
    int deepestLeavesSum(TreeNode* root) {
        
        
        int maxDepth = findDepth(0,root);
    
        
        return traverse(0,root,maxDepth);;
        
    }
    
};
