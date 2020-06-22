class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>v(2001);
        for(int i=0;i<arr.size();i++){
            v[1000+arr[i]]++;
        }
        int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                count++;
            }
        }
        count++;
        set<int>s(v.begin(),v.end());
        if(s.size()==count){
            return 1;
        }
        cout<<s.size()<<" "<<count;
        return 0;
        
    }
};