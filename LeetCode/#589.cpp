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
    void preorder(Node *root,vector<int> &v){
        if(root==NULL){
            return;
            
        }
        v.push_back(root->val);
        vector<Node*> child=root->children;
        for(int i=0;i<child.size();i++){
            preorder(child[i],v);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int>v;
        preorder(root,v);
        return v;
    }
};