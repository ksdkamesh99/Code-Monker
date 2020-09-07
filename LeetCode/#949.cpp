class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        sort(A.begin(),A.end());
        int time=-1;
        int maxtime=0;
        
        do{
            int hh=A[0]*10+A[1];
            int mm=A[2]*10+A[3];
            if(hh<24 && mm<60){
                time=hh*60+mm;
                maxtime=maxtime<time? time :maxtime;
                cout<<maxtime<<" ";
            }
        }while(next_permutation(A.begin(),A.end()));
        if(time==-1){
            return "";
        }
        else{
            int hh=time/60;
            int mm=time%60;
            string h=to_string(hh);
            string m=to_string(mm);
            if(hh<=9){
                h="0"+h;
            }
            if(mm<=9){
                m="0"+m;
            }
            return h+":"+m;
        }
    }
};