class Solution {
public:
    bool hasAlternatingBits(int n) {
        int curr=0;
        int prev;
        bool fir=1;
        while(n!=0){
            curr=n%2;
            n=n/2;
            if(fir){
                fir=0;
                prev=~curr;
            }
            if(prev==curr){
                return 0;
            }
            prev=curr;
            
        }
        return 1;
    }
};