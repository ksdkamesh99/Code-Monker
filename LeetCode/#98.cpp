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
    vector<int>v;
    void inorder(TreeNode* p){
        if(p==NULL){
            return;
        }
        inorder(p->left);
        v.push_back(p->val);
        inorder(p->right);
        
    }
    bool isValidBST(TreeNode* root) {
        bool flag=true;
        inorder(root);
        for(int i=1;i<v.size();i++){
            if(v[i-1]>=v[i]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};