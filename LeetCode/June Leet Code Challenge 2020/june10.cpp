class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int t=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        return t;
    }
};