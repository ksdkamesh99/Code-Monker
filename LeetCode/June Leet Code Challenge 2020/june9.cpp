class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int flag=0;
        for(int i=0;i<s.length();i++){
            while(j<t.length()){
                if(t[j]==s[i]){
                    j++;
                    flag=1;
                    break;
                }
                j++;
            }
            if(flag!=1){
                return 0;
            }
            if(flag==1){
                flag=0;
            }
        }
        return 1;
    }
};