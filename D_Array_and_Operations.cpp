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
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n, 0);
    f(i,0,n){
        cin >> v[i];
    }
    int sum = 0;
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < k;i++){
        sum += v[k+i]/v[i];
    }
    for (int i = 2 * k; i < n;i++){
        sum += v[i];
    }

        cout << sum<<"\n";
 
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