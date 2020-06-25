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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        
        return max(height(root->left),height(root->right))+1;
    
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int k1=height(root->left);
        int k2=height(root->right);
        int k11=diameterOfBinaryTree(root->left);
        int k22=diameterOfBinaryTree(root->right);
        cout<<k1<<" "<<k2;
        if(k1==0 && k2==0){
            return 0;
        }
        
        return max(k1+k2,max(k11,k22));
        
        }
};