class Solution {
public:
    vector<int> countBits(int num) {
        int multiple=1;
        vector<int>v(num+1);
        v[0]=0;
        if(num==0){
            return v;
        }
        
        v[1]=1;
        if(num==1){
            return v;
        }
        
        int prevmul=1;
        for(int i=2;i<=num;i++){
            if(prevmul*2==i){
                v[i]=1;
                prevmul=i;
            }
            else{
                v[i]=v[prevmul]+v[i-prevmul];
            }
            
        }
        return v;
        
    }
};