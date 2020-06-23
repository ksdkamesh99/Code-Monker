class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        // seive of erothenus for 0 to 32
        int arr[33];
        for(int i=2;i<33;i++){
            arr[i]=1;
        }
        arr[0]=0;
        arr[1]=0;
        int sqr=sqrt(33);
        for(int i=2;i<=sqr;i++){
            for(int j=2*i;j<33;j=j+i){
                arr[j]=0;
            }
        }
        int count=0;
        for(int i=L;i<=R;i++){
            int setbits=__builtin_popcount(i);
            count=count+arr[setbits];
        }
        return count;
    }
};