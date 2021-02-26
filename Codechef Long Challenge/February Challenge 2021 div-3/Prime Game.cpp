#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
bool isprime(long n){
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }
 
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int prime[1000001];
    prime[0] = 0;
    prime[1] = 0;
    int count = 0;
    for(int i = 2; i < 1000001; i++){
        if(isprime(i)){
            count++;
        }
 
        prime[i] = count;
    }
 
    long t;
    cin >> t;
    while(t--){
        long n, y;
        cin >> n >> y;
        if(prime[n] > y){
            cout << "Divyam\n";
        } else{
            cout << "Chef\n";
        }
    }
    return 0;
}
