class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(s==nums.size() || nums[s]!=target){
            return -1;
        }
        return s;
    }
};