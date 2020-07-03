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
    int maxDepth(Node* root) {
        if(root==NULL){
            return 0;
        }
        vector<Node*> child=root->children;
        vector<int>v;
        for(int i=0;i<child.size();i++){
            int y=maxDepth(child[i]);
            v.push_back(y);
        }
        if(v.empty()){
            return 1;
        }
        int maxi=*max_element(v.begin(),v.end());
        return maxi+1;
    
    }
};