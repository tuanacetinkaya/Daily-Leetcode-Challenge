class Solution {
public:
    
    void traverse(TreeNode* root,int v ,int d,int currentDepth){
        
        if(root == nullptr){
            return;
        }
        else if(currentDepth == d-1){
            TreeNode* leftNode = new TreeNode(v);
            TreeNode* rightNode = new TreeNode(v);
            leftNode->left = root->left;
            rightNode->right = root->right;
            root->left = leftNode;
            root->right = rightNode;
        }
        else{
            traverse(root->left,v,d,currentDepth+1);
            traverse(root->right,v,d,currentDepth+1);
        }
        
        
        
    }
    
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        
        if(d == 1){
            TreeNode* newRoot = new TreeNode(v);
            newRoot->left = root;
            return newRoot;
        }
        traverse(root,v,d,1);
        return root;
        
    }
};
