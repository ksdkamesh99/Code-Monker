#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    ll js;
	    cin>>js;
	    ll count=0;
	    if(js%2!=0){
	        count=js/2;
	    }
	    else{
	        ll t=js;
	        ll j=0;
	        while(t%2==0){
	            t=t/2;
	            
	        }
	        if(t==1){
	            count=0;
	        }
	        else{
	           count=t/2;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
