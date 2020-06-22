class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int>M;
        for(int i=0;i<A.size();i++){
            if(M.find(A[i])==M.end()){
                M[A[i]]=1;
            }
            else{
                return A[i];
            }
        }
        return 0;
    }
};