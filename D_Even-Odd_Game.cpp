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

    vector<ll> arr(n, 0);
    f(i,0,n){
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());
    ll ans = 0;

    for (int i = 0; i < n;i++){
if(i%2==0){
if(arr[i]%2==0){
    ans += arr[i];
}
}
else{
if(arr[i]%2==1){
    ans -= arr[i];
}
}
    }

    if(ans==0){
cout << "Tie";
    }
    else if(ans<0){
cout << "Bob";
    }
    else{
cout << "Alice";
    }
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
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */