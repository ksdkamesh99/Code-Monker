class Solution {
public:
    int maxProduct(vector<int>& nums) {
        auto it=max_element(nums.begin(),nums.end());
        int max=*it;
        nums.erase(it);
        auto itt=max_element(nums.begin(),nums.end());
        int secondmax=*itt;
        return (max-1)*(secondmax-1);
    }
};