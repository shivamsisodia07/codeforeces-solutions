#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x);

int main(){
    freopen("whereami.in", "r", stdin);
	freopen("whereami.out", "w", stdout);
ios::sync_with_stdio(0); cin.tie(0);
ll t;
// cin>>t;
t = 1;
while(t--){
int n; cin>>n;
	string st; cin>>st;
	for(int i=1; i<=n; i++){
		bool flag = false;
		set<string> setElements;
		for(int j=0; j<=n-i; j++) {
			auto ins = setElements.insert(st.substr(j, i));
			if(ins.second == false){
				flag = true;
				break;
			}
		}

		// for(auto x: setElements)		//For Debugging
		// 	cout<<x<<" ";
		// cout<<endl;

		if(!flag){
			cout<<i<<endl;
			return 0;
		}
	}
}
return 0;
}
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */