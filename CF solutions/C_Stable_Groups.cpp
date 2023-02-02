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
    ll n,k,x;
    cin>>n>>k>>x;
    ll ar[n];
    for(ll i=0;i<n;i++) cin>>ar[i];
    vector<ll>rem;
    sort(ar,ar+n);
    for(ll i=1;i<n;i++){
        if(ar[i]>ar[i-1]+x){
            rem.push_back((ar[i]-ar[i-1]-1)/x);
        }
    }
    sort(rem.begin(),rem.end());
    int i=0;
    while(i<rem.size() && k>0){
        k-=rem[i];
        if(k<0) break;
        i++;
    }
    cout<<(rem.size()-i+1)<<endl;
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