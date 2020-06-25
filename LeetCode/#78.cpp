class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size=1<<nums.size();
        vector<vector<int> > subset;
        for(int i=0;i<size;i++){
            int j;
            j=i;
            vector<int>v;
            int k=0;
            while(j!=0){
                int y=j%2;
                if(y==1){
                    v.push_back(nums[k]);
                    
                }
                j=j/2;
                k++;
                
            }
            subset.push_back(v);
            
        }
        return subset;
    }
};