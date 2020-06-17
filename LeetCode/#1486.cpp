class Solution {
public:
    int xorOperation(int n, int start) {
        int xorr=start;
        for(int i=1;i<n;i++){
            xorr=xorr^(start+(2*i));
        }
        return xorr;
    }
};