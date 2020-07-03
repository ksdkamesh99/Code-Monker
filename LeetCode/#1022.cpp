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
    int total=0;
    
    void inorder(TreeNode* root,int s){
        if(root==NULL){
            return;
        }
        s=s<<1 | root->val;

        if(root->left!=NULL){
            inorder(root->left,s);

        }
        if(root->right!=NULL){
            inorder(root->right,s);

        }
        if(root->left==NULL && root->right==NULL){
            total=total+s;
            return;
        }


        
    }
    int sumRootToLeaf(TreeNode* root) {
        int s=0;
        inorder(root,s);
        cout<<total;
        return total;
    }
};