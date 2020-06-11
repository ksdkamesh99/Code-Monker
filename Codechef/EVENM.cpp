#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int k=0;
	   for(int i1=0;i1<n;i1++){
	       for(int i2=1;i2<=n;i2++){
	           k++;
	           if(i1%2!=0 && n%2==0){
	               int y=n+k-(2*i2)+1;
	               cout<<y<<" ";
	           }
	           else{
	               cout<<k<<" ";
	           }
	            }
	            cout<<endl;
	        }
	        
	    }
	
	return 0;
}
