class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t nr=0;
        int i=32;
        while(i!=0){
            int s=n&1;
            n=n>>1;
            nr=nr+(s*pow(2,i-1));
            i--;
        }
        return nr;
        
    }
};