class Solution {
public:
    string removeDuplicates(string S) {
        string s="";
        for(int i=0;i<S.length();i++){
            if(s.length()==0){
                s.push_back(S[i]);
            }
            else if(S[i]==s.back()){
                s.pop_back();
            }
            else{
                s.push_back(S[i]);
            }
        }
        string ss=s;
        return ss;
    }
};