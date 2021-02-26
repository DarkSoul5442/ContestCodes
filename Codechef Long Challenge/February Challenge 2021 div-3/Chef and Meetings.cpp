#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

int main(){
  ll t;

  
  cin>>t;
  while(t--){
    string str;
    cin>>str;
    string a;
    cin>>a;
    int n;
    cin>>n;
    float h=0;
    
      //Minute
    int m1 = str[4] - '0';

    int m2 = str[3] - '0';

    int m3 = (m2 * 10 + m1 % 10);
    float m=m3/60.00;
    //Hours
    int h1 = str[1] - '0';

    int h2 = str[0] - '0';

    int h3 = (h2 * 10 + h1 % 10);
    if(a[0]=='A'){
      if(h3==12){
          h=00+m;
      }
      else
        h=h3+m;
    }

    else if(a[0]=='P'){
      if(h3==12){
            h=12.00+m;
      }
      else
        h=12.00+h3+m;

    }
    
    
    while(n--){
      string str1;
      string am;
      cin>>str1>>am;
      string str2;
      string pm;
      cin>>str2>>pm;
      float ha=0;
      float hb=0;
    //MINUTE 1
    int m4 = str1[4] - '0';

    int m5 = str1[3] - '0';

    int m6 = (m5 * 10 + m4 % 10);
    float m2=m6/60.00;
    
    //Minute 2
    int m7 = str2[4] - '0';

    int m8 = str2[3] - '0';

    int m9 = (m8 * 10 + m7 % 10);
    float m3=m9/60.00;

       
    int h1 = str1[1] - '0';

    int h2 = str1[0] - '0';

    int h3 = (h2 * 10 + h1 % 10);
    if(am[0]=='A'){
      if(h3==12){
          ha=00+m2;
      }
      else
        ha=h3+m2;
    }
    else if(am[0]=='P'){
      if(h3==12){
            ha=12+m2;
      }
      else
        ha=12+h3+m2;

    }
    //Second input

    int h4 = str2[1] - '0';

    int h5 = str2[0] - '0';

    int h6 = (h5 * 10 + h4 % 10);
   
    if(pm[0]=='A'){
      if(h6==12){
          hb=00+m3;
      }
      else
        hb=h6+m3;
    }
    else if(pm[0]=='P'){
      if(h6==12){
            hb=12+m3;
      }
      else
        hb=12+h6+m3;

    }
   
    
    //CompaRING
    
    if(h>=ha && h<=hb || h>=hb && h<=ha){
      cout<<1;
    }
    else
      cout<<0;
    
        }
    cout<<"\n";

}
}
