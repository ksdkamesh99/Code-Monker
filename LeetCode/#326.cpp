class Solution {
public:
    bool isPowerOfThree(int n) {
        int i=n;
        int rem;
        while(i!=0){
            rem=i%3;
            i=i/3;
            if(rem>=1){
                if(rem==1 && i==0){
                    return 1;
                }
                else{
                    return 0;
                }
            }
        }
        return 0;
    }
};