class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int ind=index[i];
            int val=nums[i];
            v.insert(v.begin()+ind,val);
        }
        return v;
    }
};