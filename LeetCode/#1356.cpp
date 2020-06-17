class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector< pair<int,int>>v;
        for(int i=0;i<arr.size();i++){
            v.push_back(make_pair(__builtin_popcount(arr[i]),arr[i]));
            
        }
        sort(v.begin(),v.end());
        vector<int>sorted;
        for(int j=0;j<v.size();j++){
            sorted.push_back(v[j].second);
        }
        return sorted;
    }
};