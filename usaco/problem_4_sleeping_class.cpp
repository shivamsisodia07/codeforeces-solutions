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
    vector<int> arr(n, 0);
    ll sum = 0;
    f(i,0,n){
        cin >> arr[i];
        sum += arr[i];
    }

    ll ans=INT_MAX,sum1=0,op=0;

    for (int i = n; i >=1;i--){
       if(sum%i==0){
        sum1 = 0;
        op = 0;
        for (int j = 0; j < n;j++){
            sum1 += arr[j];
if(sum1==sum/i){
    sum1 = 0;
}
else {
    op++;
}
if(sum1>sum/i) break;

        }

        if(sum1 == 0) ans = min(ans , op);
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
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */