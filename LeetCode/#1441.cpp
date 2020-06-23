class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int j=0;
        for(int i=1;i<=n;i++){
            if(j<target.size() && target[j]==i){
                v.push_back("Push");
                j++;
            }
            else if(j>=target.size()){
                break;
            }
            else{
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        return v;
    }
};