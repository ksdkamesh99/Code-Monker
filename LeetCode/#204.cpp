class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1){
            return 0;
        }
        vector<int>v(n,1);
        v[0]=0;
        v[1]=0;
        for(int i=2;i<sqrt(n);i++){
            for(int j=2*i;j<n;j=j+i){
                v[j]=0;
            }
        }
        int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                count++;
            }
        }
        return count;
    }
};