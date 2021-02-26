#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

int main(){
  ll t;

  
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll a[n];
    ll x=0;
    ll y=0;
    ll z=0;
    for(ll i=0;i<n;i++){
      cin>>a[i];

    }
    sort(a,a+n);
    x=a[0];
    y=a[n-1];
    z=a[1];
    cout<<abs((x-y))+abs((y-z))+abs((z-x))<<"\n";
  }

    
  }

