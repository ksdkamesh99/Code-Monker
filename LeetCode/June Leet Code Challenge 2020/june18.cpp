class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l=0;
        int n=citations.size();
        int r=n-1;
        int m;
        int ans=0;
        while(l<=r){
            m=l+(r-l)/2;
            if(citations[m]>=(n-m)){
                r=m-1;
                ans=n-m;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    
    }
};