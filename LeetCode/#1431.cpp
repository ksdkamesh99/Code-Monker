class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(),candies.end());
        
        vector<bool>v;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>=maxi){
                v.push_back(1);
            }
            else if(candies[i]+extraCandies>=maxi){
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
        }
        return v;
    }
};