#include <bits/stdc++.h>
#define int long long
using namespace std;
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x)<<"\n";
void solve(){
    int n;cin>>n;

    vector<int>ans;
    ans.pb(n);
    while(__builtin_popcount(n)>1){
        n-=(n&-n);
        cout<<n<<" ";
        ans.pb(n);
    }

    while(n>1){
        ans.pb(n/2);
        n/=2;
    }

    prt(ans.size());
    for(auto it:ans) cout<<it<<" ";
}
signed main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t;
   cin>>t;
   while(t--){
      solve();
      cout<<endl;
   }
   return 0;
}