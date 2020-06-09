class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return 0;
        }
        double s=log2(n);
        double s1=ceil(s);
        double s2=floor(s);
        return s1==s2 ? 1:0;
    }
};