class Solution {
public:
    int reverse(int x) {
        int flag=0;
        long long x1=x;
        if(x<0){
            flag=1;
            x1=fabs(x);
        }
         long long y=0;
        while(x1!=0){
            int n=x1%10;
            x1=x1/10;
            y=y*10+n;

            if(y>=INT_MAX || y<=INT_MIN){
            return 0;
        }
        
        }
        
        if(flag){
            y=-y;
        }
        return y;
    }
};