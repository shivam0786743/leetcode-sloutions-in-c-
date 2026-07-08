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
unordered_map<int,int> in;
int inx;

TreeNode* fun(vector<int>& postorder, int left, int right){
if(left > right)
        return NULL;
    TreeNode* node = new TreeNode(postorder[inx]);
    inx--;
    int id =  in[node->val];

   
    node->right =fun(postorder,id+1,right);
     node->left = fun(postorder,left,id-1);
    return node;


}


    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0; i<inorder.size(); i++){
            in[inorder[i]]=i;

        }
        inx = postorder.size()-1;
        return fun(postorder, 0, inorder.size()-1);
        
    }
};