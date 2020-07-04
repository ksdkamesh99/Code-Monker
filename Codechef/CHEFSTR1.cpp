#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    long long count=0;
	    int prev;
	    cin>>prev;
	    for(int i=1;i<n;i++){
	        int curr;
	        cin>>curr;
	        count=count+abs(prev-curr)-1;
	        prev=curr;
	    }
	    cout<<count<<"\n";
	    
	}
	return 0;
}
