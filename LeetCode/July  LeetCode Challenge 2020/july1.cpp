class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        long long total=0;
        for(int i=1;total<n;i++){
            count++;
            total=total+i;
        }
        if(total==n){
            return count;
        }
        return count-1;
    }
};