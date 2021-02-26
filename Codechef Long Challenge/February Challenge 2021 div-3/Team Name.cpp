#include <bits/stdc++.h>
#include <string>
using namespace std;

map<string,vector<char>> mp;
string str;

void solve(){
	mp.clear();
	str.clear();
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>str;
			if(str.length()>0){
				mp[str.substr(1)].push_back(str[0]);
			}
		}
		int ans=0;
		for(auto it:mp)
		{
			for(auto i:mp){
				if(it.first!=i.first){
					set<char> st(it.second.begin(),it.second.end());
					int count=0;
					for(auto j : i.second){
						if(st.find(j)!=st.end())
							count++;
					}
					ans+=(it.second.size()-count)*(i.second.size()-count);
				}
			}
		}
		cout<<ans<<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
