#include<cstdio>
#include <vector>
using namespace std;
#define int long long
const int Maxnum=1<<19;
const int M=998244353;
int modulous=998244353;
int ws[Maxnum];
int fact_reverse[500005];
int keep_book[500005];
int factorial[500005];
int gpa[1<<19];
int gpb[1<<19];


void get_ready(){
fact_reverse[1]=1;
fact_reverse[0]=1;
keep_book[1]=1;
keep_book[0]=1;
factorial[1]=1;
factorial[0]=1;
 for(int i=2;i<200005;i++){
 keep_book[i] = keep_book[modulous%i]*(modulous-modulous/i)%modulous;
 }
 for(int i=2;i<200005;i++){

 factorial[i]=(factorial[i-1]*i)%modulous;
 }
for(int i=2;i<200005;i++){
fact_reverse[i]=(keep_book[i]*fact_reverse[i-1])%modulous;
}
}
int boundation(int n, int r){
 if(r>n)return 0;
 return (((fact_reverse[r]*fact_reverse[n-r])%modulous)*factorial[n])%modulous;

}
void false_begin(){	
}
long long binpow(long long a, long long b=modulous-2, long long m=modulous) {
 a %= m;
long long res = 1;
while (b > 0) {
if (b & 1)
 res = res * a % m;
 a = a * a % m;
 b >>= 1;
}
return res;
}
void true_begin(int *a,int n,int f=0){

 int i;
 int j;
 int k;
 int m;
 int u;
 int v;
 int w;
 int ab;

 for(i=n>>1,j=1,k;j<n-1;j++){
if(i>j)swap(a[i],a[j]);
for(k=n>>1;k<=i;k>>=1)i^=k;i^=k;
}
for(m=2;m<=n;m<<=1)

 for(i=0,ab=binpow(3,f==1?(M-1)/m:(M-1)/m*(m-1),M);i<n;i+=m)

 for(j=i,w=1;j<i+(m>>1);j++){

 u=a[j],v=1ll*w*a[j+(m>>1)]%M;

 if((a[j]=u+v)>=M)
 	{a[j]-=M;}

 if((a[j+(m>>1)]=u-v)<0)
 	{
 		a[j+(m>>1)]+=M;
    }
w=1ll*w*ab%M;
 }
 if(f==1)for(w=binpow(n,M-2,M),i=0;i<n;i++)a[i]=1ll*a[i]*w%M;
}
vector<int> mul(vector<int> vec_one,vector<int> widee){
int n_a=vec_one.size()-1;
int n_b=widee.size()-1;
int n_final=1;
while(n_final<=n_a+n_b)n_final*=2;
int i = 0;
 while(i<n_final){
 gpa[i] = i<=n_a?vec_one[i]:0;
 i++;
 }
 i=0;
while(i<n_final){
 gpb[i] = i<=n_b?widee[i]:0;
 i++;
}
true_begin(gpb, n_final);
true_begin(gpa, n_final);
i=0;
while(i<n_final){
gpa[i]=gpa[i]*gpb[i]%M;
i++;}
true_begin(gpa,n_final,1);
vector<int> c;
i=0;
while(i<=(n_a+n_b)){
c.push_back(gpa[i]);
i++;
}
return c;
}
signed main(){

int n;
scanf("%lld",&n);
get_ready();

 vector<int> vec_one(n);

 vector<int> keep_book(30);

 for(int i=0;i<n;i++){
 scanf("%lld",&vec_one[i]);

 }
 for(int i=0;i<n;i++){

 for(int j=0;j<30;j++){
 if(vec_one[i]&(1<<j)){

 keep_book[j]++;
 }}}
 vector<int> outputt(n+1);

 for(int ii=0;ii<30;ii++){

 vector<int> fanta={0};

vector<int> forward={1};
 for(int i=1;i<=keep_book[ii];i+=2){
 fanta.push_back(boundation(keep_book[ii], i));
 fanta.push_back(0);
 }
int i=1;
 while(i<=(n-keep_book[ii])){
 forward.push_back(boundation(n-keep_book[ii], i));;
 i++;
}
 auto finalss=mul(fanta, forward);
 i=0;
 while(i<=n){
 outputt[i]=(outputt[i]+((1<<ii)*finalss[i]))%modulous;;
 i++;
 }

 }
 int i=1;
 while(i<=n){
 outputt[i]+=outputt[i-1];
 outputt[i]%=modulous;
 i++;
 }
 int q;
 scanf("%lld",&q);
 while(q--){
 int g;
 scanf("%lld",&g);
 printf("%lld\n",outputt[g]);
 }

}
