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
    queue<TreeNode*> q;
    queue<TreeNode*> v;
    int maxdepth(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        return max(maxdepth(root->left),maxdepth(root->right))+1;
    }
    void levelOrder(TreeNode* root,vector<vector<int>> &w,int n){
        
        if(root==NULL){
            return;
        }
        w[n].push_back(root->val);
        if(root->left!=NULL){
            levelOrder(root->left,w,n+1);
        }
        if(root->right!=NULL){
            levelOrder(root->right,w,n+1);
        }
    }
  
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        int l=1;
        int c=0;
        int n=maxdepth(root);
        vector<vector<int>> w(n);

        levelOrder(root,w,0);
        
        
        return w;
    }
};