#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    int lost=0;
	    for(int j=0;j<n;j++){
	        if(arr[j]>k){
	            lost=lost+arr[j]-k;
	        }
	    }
	    cout<<lost<<"\n";
	    
	}
	return 0;
}
