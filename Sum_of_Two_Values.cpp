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
    ll n, target;
    cin >> n >> target;

    vector<int> v(n);
    unordered_map<int, int> mp;
    f(i,0,n){
        cin >> v[i];
        mp[v[i]]=i;
    }

    f(i,0,n){
        if(mp.find(target-v[i])!=mp.end()){
            if(i==mp[target-v[i]]){
continue;
            }
            cout << i+1 <<" "<< mp[target - v[i]]+1;
            return;
        }
    }
    cout << "IMPOSSIBLE" ;
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