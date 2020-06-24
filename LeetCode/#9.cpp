class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        else if(x==0){
            return 1;
        }
        else{
            vector<int>v;
            while(x!=0){
                int n=x%10;
                v.push_back(n);
                x=x/10;
            }
            int n=v.size();
            for(int i=0;i<n/2;i++){
                if(v[i]!=v[n-1-i]){
                    return 0;
                }
            }
            return 1;
        }
    }
};