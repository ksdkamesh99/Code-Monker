class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.reserve(nums1.size() + nums2.size());
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(),nums1.end());
        double m;
        int n3=nums1.size();
        if(n3%2==0){
            int k=n3/2;
            m=(nums1[k]+nums1[k-1]);
            m=m/2;          
        }
        if(n3%2!=0){
            int k=n3/2;
            m=nums1[k];
        }
        return m;
    }
};