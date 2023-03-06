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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (int &e : v) {
        cin >> e;
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin();
        ans -= lower_bound(v.begin(), v.end(), l - v[i]) - v.begin();
        
        if (l <= 2 * v[i] && 2 * v[i] <= r) ans--;
        
    }
    cout<< ans/2 << "\n";
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
solve();

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