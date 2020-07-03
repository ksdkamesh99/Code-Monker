class Solution {
public:
    int divide(int dividend, int divisor) {
        int flagdi=0;
        int flagdv=0;
        if(dividend==0){
            return 0;
        }
        if(dividend<0){
            flagdi=1;
            dividend=abs(dividend);
        }
        if(divisor<0){
            flagdv=1;
            divisor=abs(divisor);
        }
        long long count=double(exp(log(fabs(dividend))-log(fabs(divisor))));
        if(count>INT_MAX){
            if(flagdi+flagdv==0 || flagdi+flagdv==2){
                return INT_MAX;
            }
            else{
                return INT_MIN;
            }
        }
        if(flagdi+flagdv==0 || flagdi+flagdv==2){
            return count;
        }
        
        return -1*count;
        
    }
};