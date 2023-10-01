#include <bits/stdc++.h>
#define int long long
using namespace std;
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x);
void solve(){
int a,b,n;
cin>>a>>b>>n;
vector<int> v(n,0);

for(int i=0;i<n;i++){
    cin>>v[i];
}

int res=0;
// cout<<"yes";
int count=b;
res+=b-1;count=1;
for(int i=0;i<n;i++){
    count=min(count+v[i],a);
    res+=count-1;
    count=1;
}

cout<<res+1;
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