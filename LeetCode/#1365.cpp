class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        int n=v.size();
        vector<int>snc;
        for(int i=0;i<n;i++){
            int a=lower_bound(v.begin(),v.end(),nums[i])-v.begin();
            snc.push_back(a);
        }
        return snc;
    }
};