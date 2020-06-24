class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>v;
        int xorr=arr[0];
        v.push_back(xorr);
        for(int i=1;i<arr.size();i++){
            xorr=xorr^arr[i];
            v.push_back(xorr);
        }
        vector<int>v1;
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            if(l==0){
                v1.push_back(v[r]);
            }
            else{
                v1.push_back(v[l-1]^v[r]);
            }
        }
        return v1;
    }
};