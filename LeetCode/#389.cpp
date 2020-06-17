class Solution {
public:
    char findTheDifference(string s, string t) {
        int xorr;
        string st=s+t;
        for(int i=0;i<st.length();i++){
            int j=st[i];
            if(i==0){
                xorr=j;
            }
            else{
                xorr=xorr^st[i];
            }
        }
        return xorr;
    }
};