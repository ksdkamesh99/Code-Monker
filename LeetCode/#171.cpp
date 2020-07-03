class Solution {
public:
    int titleToNumber(string s) {
        long long colno=0;
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            int y=s[i]-65+1;
            colno=colno+pow(26,n-i-1)*y;
            
        }
        return colno;
    }
};