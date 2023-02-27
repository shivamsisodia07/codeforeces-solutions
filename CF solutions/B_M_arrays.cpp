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
    ll n, m;
    cin >> n >> m;

    vector<int> arr(n);
    map<int, int> mp;
    f(i,0,n){
        cin >> arr[i];
        mp[arr[i]%m]++;
    }
    ll ans = 0;
    for(auto it:mp){
        if(it.first==0 and it.second>0){
            ans++;
        }
        else if(mp.count(m-it.first)==0){
            ans += it.second;
        }
        else if(m-it.first==it.first){
            ans++;
        }
else if(m-it.first > it.first){
            int a = it.second;
            int b = mp[m - it.first];

if(abs(a-b)<=1){
    ans++;
}
else if(a>b){
    a -= (b + 1);
    ans++;
    ans += a;
}
else {
    b -= (a + 1);
    ans++;
    ans += b;

}
}
}

cout << ans;
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
solve();
cout<<endl;
}
return 0;
}
