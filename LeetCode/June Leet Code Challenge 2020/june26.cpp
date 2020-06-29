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
    long long ans=0;
    void trav(TreeNode* root,long long val){
        if(root==NULL){
            return;
        }
        val=val*10;
        val=val+root->val;
        if(root->left==NULL && root->right==NULL){
            ans=ans+val;
            return;
        }
        trav(root->left,val);
        trav(root->right,val);
    }
    int sumNumbers(TreeNode* root) {
        trav(root,0);
        return ans;
    }
};