class Solution {
public:
    int findComplement(int num) {
        if(num==0){
            return 1;
        }
        int h=0;
        int n=0;
      while(num!=0){
          int u=num%2;
          num=num/2;
          h=h+(!u)*pow(2,n);
          n++;
      }
        return h;
    }
};