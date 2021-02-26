#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

int main(){
  int n;
  cin>>n;
  int maxi=0;
  for(int i=1;i<=10;i++){
      if(n%i==0){
        maxi=i;
      }
  }
  cout<<maxi;
}
