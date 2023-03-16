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
    vector<ll> v(n, 0);
    ll mini = INT_MAX, pos = -1;
    f(i,0,n){
        cin >> v[i];
        if(mini>v[i]){
         mini =  v[i];
        pos = i ;
        }
    }
    ll r =1000000007,st = -1, op = 0;

    if(pos%2==0){
        st = 1;
        op = n / 2;
    }
    else{
        st = 0;
        op = (n + 1) / 2;
    }
    cout << op << "\n";
    for (int i = 0; i < op;i++){
        cout << pos + 1 << " " << st +1<< " " << v[pos] << " " << r<<"\n";
        st += 2;
    }
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