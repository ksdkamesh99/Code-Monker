class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i=0;
        while(n!=0){
            int k=n&1;
            if(k==1){
                i++;
            }
            n=n>>1;
        }
        return i;
    }
};