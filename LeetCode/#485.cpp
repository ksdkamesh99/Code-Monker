class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>v;
        if(nums.empty()){
            return 0;
        }
        int back=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                v.push_back(i-back-1);
                back=i;
            }
        }
        v.push_back(nums.size()-back-1);
        return *max_element(v.begin(),v.end());
    }
};