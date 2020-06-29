class Solution {
public:
    int numJewelsInStones(string J, string S) {
        vector<int>v(52);
        for(int i=0;i<S.length();i++){
            if(S[i]>=65 && S[i]<=90){
                int s=S[i]-65;
                v[s]++;
            }
             if(S[i]>=97 && S[i]<=122){
                int s=S[i]-97+26;
                v[s]++;
            }
        }
        int count=0;
        for(int i=0;i<J.length();i++){
            if(J[i]>=65 && J[i]<=90){
                int s=J[i]-65;
                count=count+v[s];
            }
             if(J[i]>=97 && J[i]<=122){
                int s=J[i]-97+26;
                 count=count+v[s];
            }
        
        }
        return count;
    }
};