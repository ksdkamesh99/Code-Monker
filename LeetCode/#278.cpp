// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        int r=n;
        int m;
        while(l<=r){
            m=l+(r-l)/2;
            if(isBadVersion(m-1)==false && isBadVersion(m)==true){
                return m;
            }
            else if(isBadVersion(m)==false){
                l=m+1;
            }
            else if(isBadVersion(m)==true && isBadVersion(m-1)==true){
                r=m-1;
            }
        }
        return m;
    }
};