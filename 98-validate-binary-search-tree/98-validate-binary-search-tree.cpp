class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int>nodes;
        inordertrav(root,nodes);
        bool ans = false;
        if(nodes.size() == 1) return true;
        for(int i =0;i<nodes.size()-1;i++){
            if(nodes[i+1] > nodes[i]){
                ans = true;
            }else{
                ans = false;
                break;
            }
        }
        return ans;
    }
private:
    void inordertrav(TreeNode*root,vector<int> &ans){
        if(!root) return;
        inordertrav(root->left,ans);
        ans.push_back(root->val);
        inordertrav(root->right,ans);
    }
};