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
    int findBottomLeftValue(TreeNode* root) {
        std::vector<TreeNode*> s;
        s.push_back(root);
        int currentLevelCount = 1;
        int answer =root->val;
        while(s.size()!=0){ 
            if(currentLevelCount==0){
                currentLevelCount = s.size();
                answer = s[0]->val;
            }
            if(s[0]->left != nullptr){
                s.push_back(s[0]->left);
            }
            if(s[0]->right != nullptr){
                s.push_back(s[0]->right);
            }
            s.erase(s.begin());
            currentLevelCount--;   
        }      
        return answer;
    }
};
