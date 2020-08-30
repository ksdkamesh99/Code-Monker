class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shuff=s;
        for(int i=0;i<indices.size();i++){
          shuff[indices[i]]=s[i];
        }
        return shuff;
    }
};