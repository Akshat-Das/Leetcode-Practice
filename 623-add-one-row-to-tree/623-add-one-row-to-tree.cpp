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
    void dfs(TreeNode* root,int val,int depth,int cd){   
       if(root==NULL)
           return ;
        if(cd==depth-1 && root!=NULL){
            TreeNode* tmp1=root->left;
            TreeNode* tmp2=root->right;
            root->left=new TreeNode(val);
            root->right=new TreeNode(val);
            root->left->left=tmp1;
            root->right->right=tmp2;
        }
        dfs(root->left,val,depth,cd+1);
        dfs(root->right,val,depth,cd+1);
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        TreeNode* nr=root;
        if(depth==1){
            nr=new TreeNode(val);
            nr->left=root;
        }
        else{
            dfs(root,val,depth,1);
        } 
        return nr;
    }
};