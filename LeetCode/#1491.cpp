class Solution {
public:
    double average(vector<int>& salary) {
        int maxi=*max_element(salary.begin(),salary.end());
        int mini=*min_element(salary.begin(),salary.end());
        int total=accumulate(salary.begin(),salary.end(),0);
        total=total-maxi-mini;
        double avg=double(total)/double((salary.size()-2));
        return avg;
    }
};