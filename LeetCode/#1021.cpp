class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char>st;
        string s="";
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                if(!st.empty()){
                    cout<<'(';
                    s=s+"(";
                }
                st.push('(');
            }
            if(S[i]==')'){
                st.pop();
                if(!st.empty()){
                    s=s+")";
                    cout<<')';
                }
                
            }
        }
        return s;
    }
};