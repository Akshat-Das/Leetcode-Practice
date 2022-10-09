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
    bool findTarget(TreeNode* root, int k) {
        vector<int> nodes;
        traversal(root,nodes);
        bool ans = false;
        for(int i=0;i<nodes.size()-1;i++){
            for(int j=i+1;j<nodes.size();j++){
                if(nodes[i] + nodes[j] == k){
                    ans = true;
                    break;
                }
            }
        }
        return ans;
    }
private:
    void traversal(TreeNode* root, vector<int> &nodes){
        if(!root)return;
        nodes.push_back(root->val);
        traversal(root->left,nodes);
        traversal(root->right,nodes);
    }
};