#include<bits/stdc++.h>
using namespace std;
#define v1 vector<int>

#define int long long

int32_t main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    v1 w(n), j(n);


    for (int i = 0; i < n; i++) {
      cin >> w[i];

    }
    for (int i = 0; i < n; i++) {
      cin >> j[i];
    }

    v1 v(w.begin(), w.end());
    sort(v.begin(), v.end());
    // for(auto it : v)
    //  cout<<it<<" ";
    // cout<<endl;
    if(n==2){
     if(w[0]<w[1]){
       cout<<0<<"\n";
     }
     else if(j[0]==1){
       cout<<2<<"\n";
     }
     else
       cout<<1<<"\n";
    }
    if (n == 3) {

      int a1, b1, c1;
      int a, b, c;
      for (int i = 0; i < n; i++) {
        if (w[i] == 1) {

          a1 = i;
          a = j[i];
        }
        else if (w[i] == 2) {

          b1 = i;
          b = j[i];
        }
        else if (w[i] == 3) {

          c1 = i;
          c = j[i];
        }
      }
      int count = 0;
      // cout << a1 << " " << b1 << " " << c1 << "\n";
      // cout << b << "\n";
      while (b1 <= a1) {
        b1 += b;
        count++;

      }
      while (c1 <= b1) {
        c1 += c;
        count++;
      }
      cout << count<<"\n";
    }
    else if(n==4){
    	int a1, b1, c1 ,d1;
      int a, b, c ,d;
      for (int i = 0; i < n; i++) {
        if (w[i] == 1) {

          a1 = i;
          a = j[i];
        }
        else if (w[i] == 2) {

          b1 = i;
          b = j[i];
        }
        else if (w[i] == 3) {

          c1 = i;
          c = j[i];
        }
        else if(w[i]==4){
        	d1=i;
        	d=j[i];
        }
      }
      int count = 0;
      // cout << a1 << " " << b1 << " " << c1 << "\n";
      // cout << b << "\n";
      while (b1 <= a1) {
        b1 += b;
        count++;

      }
      while (c1 <= b1) {
        c1 += c;
        count++;
      }
      while(d1<=c1){
      	d1+=d;
      	count++;
      }
      cout << count<<"\n";
    }
  }


}
