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
bool fun(TreeNode* root ){
    bool nullSeen =  false;
    if (root == NULL){
        return true;
    }

        queue<TreeNode*> q;
        q.push(root);
         while(!q.empty()){
            TreeNode* t = q.front();
            q.pop();

            if(t == NULL){
                nullSeen = true;
             }
             else {if (nullSeen){
                return false;
             }
             
             q.push(t->left);
             q.push(t->right);
             }

         }
         return true;
    
}

    bool isCompleteTree(TreeNode* root) {
        return fun (root);
        
        
    }
};