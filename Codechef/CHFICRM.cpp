#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    int ten=0;
	    int five=0;
	    int fiften=0;
	    int flag=1;
	    for(int j=0;j<n;j++){
	        int c=arr[j]-5;
	        if(c==0){
	            flag=1;
	       if(arr[j]==5 ){
	            five++;
	        }
	        if(arr[j]==10){
	            ten++;
	        }
	        if(arr[j]==15){
	            fiften++;
	        }
	        }
	        else if(c==5 && five>=1){
	            five--;
	            flag=1;
	       if(arr[j]==5 ){
	            five++;
	        }
	        if(arr[j]==10){
	            ten++;
	        }
	        }
	        else if(c==10 && ten>=1){
	            ten--;
	            flag=1;
	            if(arr[j]==5 ){
	            five++;
	        }
	        if(arr[j]==10){
	            ten++;
	        }
	            
	        }
	        else if(c==10 && five>=2){
	            five=five-2;
	            flag=1;
	            if(arr[j]==5 ){
	            five++;
	        }
	        if(arr[j]==10){
	            ten++;
	        }
	        }    
	        else{
	            flag=0;
	            break;
	        }
	        
	    }
	    if(flag){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
