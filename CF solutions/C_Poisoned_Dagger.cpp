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
    ll n, h;
    cin >> n >> h;


    vector<ll> damage(n);
    f(i,0,n){
        cin >> damage[i];
    }

    ll l = 1,r= 1e18,mid;

    ll sum;
    while(l<=r){
        mid = l + (r - l) / 2;
        sum = mid;

        for (int i = 0; i < n - 1;i++){
            sum += min(mid, damage[i + 1] - damage[i]);
        }
            if (sum < h)
            {
                l = mid + 1;
            }
            else{
            r = mid - 1;
        }
    }

    cout << r + 1;
}
    

int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
// t = 1;
cin>>t;
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