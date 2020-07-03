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
    void postorder(Node* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        vector<Node*> child=root->children;
        for(int i=0;i<child.size();i++){
            postorder(child[i],v);
        }
        v.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int>v;
        postorder(root,v);
        return v;
    }
};