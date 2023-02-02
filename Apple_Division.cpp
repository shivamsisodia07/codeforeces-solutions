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
ll ans = INT_MAX;

void sol(ll i,ll n,ll sum,vector<ll>&v,ll s){

    if(i==n){
        ans = min(ans, abs(2*sum-s));
        return;
    }
    sol(i + 1, n, sum + v[i], v,s);
    sol(i + 1, n, sum, v,s);
    return;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    f(i,0,n){
        cin >> v[i];
        sum += v[i];
    }
    sol(0, n, 0,v,sum);
    cout << ans;
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
// cin>>t;
t = 1;
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