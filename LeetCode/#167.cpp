class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        for(int i=0;i<numbers.size();i++){
            int search=target-numbers[i];
            if(binary_search(numbers.begin()+i+1,numbers.end(),search)){
                int h=lower_bound(numbers.begin()+i+1,numbers.end(),search)-numbers.begin();
                if(i<h){
                    v.push_back(i+1);
                    v.push_back(h+1);
                    break;
                }
            }
        }
        return v;
    }
};