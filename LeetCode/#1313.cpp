class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i=i+2){
            int f=nums[i];
            int val=nums[i+1];
            for(int j=0;j<f;j++){
                v.push_back(val);
            }
        }
        return v;
    }
};