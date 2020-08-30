class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<pair<int,int>> v;
        for(int i=0;i<costs.size();i++){
            v.push_back(make_pair(costs[i][1]-costs[i][0],i));
        }
        sort(v.begin(),v.end());
        int j=v.size()/2;
        int cost=0;
        for(int i=0;i<v.size();i++){
            if(i<j){
                cost=cost+costs[v[i].second][1];
            }
            else{
                cost=cost+costs[v[i].second][0];
                
            }
        }
        return cost;
    }
};