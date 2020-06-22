class Solution {
    
public:
    
    int fibnoci(int n,vector<int>&v){
        
        if(v[n]==-1){
            v[n]=fibnoci(n-1,v)+fibnoci(n-2,v)+fibnoci(n-3,v);
            
        }  
        return v[n];
    }
    
    
    int tribonacci(int n) {
        vector<int> v(1000,-1);
        v[0]=0;
        v[1]=1;
        v[2]=1;
        return fibnoci(n,v);
    }
};