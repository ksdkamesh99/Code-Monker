class Solution {
public:
    bool isPowerOfFour(int num) {
        int i=num;
        int rem;
        
        while(i!=0){
            rem=i%4;
            i=i/4;
            if(rem>=1){
                if(i==0 && rem==1){
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