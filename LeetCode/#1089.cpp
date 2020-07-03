class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int k=n;
        int i;
        for(i=0;i<n;i++){
            if(arr[i]==0){
                arr.insert(arr.begin()+i+1,0);
                i++;
                k++;
            }
            
        }
        for(int j=n;j<k;j++){
            arr.pop_back();
        }      
    }
};