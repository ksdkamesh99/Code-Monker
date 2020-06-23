class Solution {
public:
    int fibnoci(int n,vector<int>&v){
        if(v[n]==-1){
            v[n]=fibnoci(n-1,v)+fibnoci(n-2,v);
        }
        return v[n];
    }
    int fib(int N) {
        vector<int>v(40,-1);
        v[0]=0;
        v[1]=1;
        return fibnoci(N,v);
    }
};