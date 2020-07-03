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
    TreeNode* inorder(TreeNode* root,TreeNode* &startroot,TreeNode* &endroot){
        if(root==NULL){
            return startroot;
        }
        startroot=inorder(root->left,startroot,endroot);
        if(startroot==NULL){
            startroot=new TreeNode(root->val);
            endroot=startroot;
        }
        else{
            endroot->right=new TreeNode(root->val);
            endroot=endroot->right;

        }
        startroot=inorder(root->right,startroot,endroot);
        return startroot;

    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* startroot=NULL;
        TreeNode *endroot=NULL;
        startroot=inorder(root,startroot,endroot);
        return startroot;
    }
};