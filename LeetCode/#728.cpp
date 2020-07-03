class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
            int x=i;
            int y=i;
            int flag=1;
            while(x!=0 && flag==1){
                int n=x%10;
                x=x/10;
                if(n==0 || y%n!=0){
                    flag=0;
                    
                }
            }
    
            if(flag){
                v.push_back(y);
            }
        }
        return v;
    }
};