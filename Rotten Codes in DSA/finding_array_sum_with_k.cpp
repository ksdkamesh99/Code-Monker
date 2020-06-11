#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;
#define fi(i,n) for(int i=0;i<n;i++)
#define Fi(i,k,n) for(int i=k;i<n;i++)
#define fd(i,n) for(int i=n-1;i>=0;i--)
#define Fd(i,k,n) for(int i=n-1;i>=k;i--)
#define pop(i) __builtin_popcount(i)
const int mod = 1000000007;
#define deb(x) cout<<#x<<" "<<x<<"\n"
#define PI 3.1415926535897932384626
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define mp make_pair
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define F first
#define S second
#define itr(it,a) for(it=a.begin();it!=a.end();it++)
#define bs(a,b) binary_search(all(a),b)
#define lb(a,b) lower_bound(all(a),b)
#define ub(a,b) upper_bound(all(a),b)
#define nod(x) floor(log10(x))+1
#define pb(s) push_back(s)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n=8;
    int arr[]={1,2,3,4,5,6,7,8};
    int k;
    cin>>k;
    vector<int>x,y;
    int sum=0;
    int i=0;
    int j=0;
    while(i<n && j<n){
        if(sum<k){
            sum=sum+arr[j];
            
            j++;

        }
        if(sum>=k){
            cout<<i<<" "<<j<<" "<<sum<<"\n";

            x.push_back(i);
            y.push_back(j);
            sum=sum-arr[i];
            i++;
        }
        
    }

    
    
    return 0;


}