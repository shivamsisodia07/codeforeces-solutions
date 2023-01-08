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
    ll d, n;
    cin >> d;
    cin >> n;

    vector<int> month(n,0);
    f(i,0,n){
        cin >> month[i];
    }

    int ans = 0;

    f(i,0,n-1){
        ans += d - month[i];
    }

    cout << ans << "\n";
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);

solve();

return 0;
}
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */