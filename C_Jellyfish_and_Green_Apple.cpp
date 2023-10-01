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
int m,n;cin>>m>>n;
int t=m/n;
int c=t*n;
m=m-c;

if(m){
int q=__gcd(m,n);
n/=q;
m=m/q;
bool f=0;
if(__builtin_popcount(n)!=1){
    f=1;
}
if(f){
    cout<<-1;
    return;
}

vector<int>nums;

bitset<64> b(m);

for(int i=0;i<64;i++){
    if(b[i]){
        nums.pb(pow(2,i));
    }
}
int ans=0;
for(auto i:nums){
    ans+=(n/i -1)*i;
}
cout<<ans*q;
}
else{
    cout<<0;
}
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