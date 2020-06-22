class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
 
        vector<int>v(nums1.size());
        vector<int>::iterator ls;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        ls=set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),v.begin());
        set<int>s(v.begin(),ls);
        vector<int>inter(s.begin(),s.end());
        
        return inter;
    }
};