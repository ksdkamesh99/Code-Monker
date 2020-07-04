#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    long long bob=0;
	    long long chef=0;
	    for(int j=0;j<n;j++){
	        long long c,b;
	        cin>>c>>b;
	        int csum=0;
	        int bsum=0;
	        while(c!=0){
	            int n1=c%10;
	            c=c/10;
	            csum=csum+n1;
	        }
	        
	        while(b!=0){
	            int n1=b%10;
	            b=b/10;
	            bsum=bsum+n1;
	        }
	        if(bsum==csum){
	            bob++;
	            chef++;
	        }
	        if(bsum>csum){
	            bob++;
	        }
	        if(csum>bsum){
	            chef++;
	        }
	    }
	    if(bob>chef){
	        cout<<1<<" "<<bob<<"\n";
	    }
	    if(bob==chef){
	        cout<<2<<" "<<chef<<"\n";
	    }
	    if(chef>bob){
	        cout<<0<<" "<<chef<<"\n";
	    }
	}
	return 0;
}
