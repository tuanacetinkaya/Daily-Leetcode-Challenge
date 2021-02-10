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
    TreeNode * getMaximumTree(vector<int> vector){
    TreeNode * node;
    if(vector.size() == 0) {
        return NULL;
    }

    int maxIndex = 0 ;

    for(int i = 0 ; i<vector.size() ; i++){

        if(vector[i]>vector[maxIndex]){
            maxIndex = i;
        }

    }

    std::vector<int> left;
    std::vector<int> right;

    for(int i = 0 ; i<maxIndex ; i++){
        left.push_back(vector[i]);
    }
    for(int i = maxIndex+1 ; i<vector.size() ; i++ ){
        right.push_back(vector[i]);
    }

    TreeNode* leftNode = getMaximumTree(left);
    TreeNode* rightNode = getMaximumTree(right);

     node = new TreeNode(vector[maxIndex],leftNode,rightNode);

    return node;

}
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        
        
        
        return getMaximumTree(nums);
        
    }
};
