class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int dig=log10(nums[i])+1;
            if(dig%2==0){
                count++;
            }
        }
        return count;
    }
};