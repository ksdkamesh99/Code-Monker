class Solution {
public:
    void swap(char *s1,char *s2){
        char a=*s1;
        char b=*s2;
        char c=a;
        a=b;
        b=c;
        *s1=a;
        *s2=b;
    }
    void reverseString(vector<char>& s) {
        int len=s.size();
        for(int i=0;i<len/2;i++){
            swap(&s[i],&s[len-i-1]);
            
        }
        
    }
};