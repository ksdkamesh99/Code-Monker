#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    string s;
	    cin>>s;
	    int count=0;
	    int j=0;
	    while(j<s.length()-1){
	        if(s[j]=='x'){
	            if(s[j+1]=='y'){
	                count++;
	                j=j+2;
	            }
	            else{
	                j++;
	            }
	        }
	        else{
	            if(s[j+1]=='x'){
	                count++;
	                j=j+2;
	            }
	            else{
	                j++;
	            }
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
