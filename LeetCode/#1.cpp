class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int flag=1;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int b=target-a;
            int o;
            
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==b){
                    v.push_back(i);
                    v.push_back(j);
                    flag=0;
                    break;
                }
            }
            if(flag!=1){
                break;
            }
        }
        return v;
    }
};