class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=-1;
        int u=-1;
        if(!nums.empty()){
            l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            u=upper_bound(nums.begin(),nums.end(),target)-nums.begin();

            if(l<nums.size() && u<=nums.size() && nums[l]==target){
                l=l;
                u=u-1;
                 
            }
            else{
                l=-1;
                u=-1;
                 
    
            }
        
        }
        vector<int>v;
        v.push_back(l);
        v.push_back(u);
        return v;
    }
};