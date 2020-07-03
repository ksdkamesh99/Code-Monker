/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxdepth(Node* root){
        if(root==NULL){
            return 0;
        }
        vector<Node*> child=root->children;
        vector<int>v;
        for(int i=0;i<child.size();i++){
            int y=maxdepth(child[i]);
            v.push_back(y);
        }
        if(v.empty()){
            return 1;
        }
        int maxi=*max_element(v.begin(),v.end());
        return maxi+1;
    }
    void levelorder(Node *root,vector<vector<int> > &w,int n){
        if(root==NULL){
            return;
        }
        vector<Node*> child=root->children;
        w[n].push_back(root->val);
        for(int i=0;i<child.size();i++){
            if(child[i]!=NULL){
                levelorder(child[i],w,n+1);
            }
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        int n=maxdepth(root);
        cout<<n;
        
        vector<vector<int>> w(n);
        levelorder(root,w,0);
        
        return w;
    }
};