class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string>s;
        for(int i=0;i<words.size();i++){
            string ss="";
            for(int j=0;j<words[i].length();j++){
                ss=ss+morse[words[i][j]-97];
            }
            s.push_back(ss);
        }
        set<string>d(s.begin(),s.end());
        return d.size();

    }
};