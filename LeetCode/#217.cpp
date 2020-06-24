class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        vector<int>v(abs(min)+max+2);
        for(int i=0;i<nums.size();i++){
            v[abs(min)+nums[i]]++;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]>1){
                
                return 1;
            }
        }
        return 0;
    }
};