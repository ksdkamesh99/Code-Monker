class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorr=0;
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i=1;i<=maxi;i++){
            xorr=xorr^i;
        }
        int flag=0;
        for(int j=0;j<nums.size();j++){
            xorr=xorr^nums[j];
            if(nums[j]==0){
                flag=1;
            }
        }
        if(xorr==0 && flag==1){
            xorr=maxi+1;
        }
        return xorr;
    }
};