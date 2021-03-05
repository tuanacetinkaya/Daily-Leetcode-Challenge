class Solution {
public:
    
    void traverse(TreeNode* root, int level,vector<vector<int>>& list){
        
        if(root == nullptr){
            return;
        }
        
        if(list.size()<level){
            vector<int> newList;
            newList.push_back(root->val);
            list.push_back(newList);
        }
        else{
            list[level-1].push_back(root->val);
        }
        traverse(root->left,level+1,list);
        traverse(root->right,level+1,list);
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<vector<int>> list;
        vector<double> result;
        traverse(root,1,list);
        
        for(int i = 0 ; i<list.size();i++){
            
            double sum = 0;
            for(int j = 0 ;j<list[i].size();j++){
                sum+=list[i][j];
            }
            result.push_back(sum/list[i].size());
            
        }
        
        return result;
        
        
        
    }
};
