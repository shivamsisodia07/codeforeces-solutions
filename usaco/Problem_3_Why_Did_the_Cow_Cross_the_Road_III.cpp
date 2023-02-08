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
void solve()
{
    ll n;
    cin >> n;
    vector<vector<int>> v(n,vector<int>(2));
    f(i,0,n){
        cin >> v[i][0] >> v[i][1];
    }

    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < n;i++){

if(sum<v[i][0]){
     sum = v[i][0] + v[i][1];
}
else{
     sum += v[i][1];
}
        
    }

    cout << sum;
}
int main(){
freopen("cowqueue.in", "r", stdin);
	freopen("cowqueue.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
ll t;
t = 1;
// cin>>t;
while(t--){
solve();
cout<<endl;
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