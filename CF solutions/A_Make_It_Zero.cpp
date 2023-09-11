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
int n;cin>>n;
vector<int>arr(n,0);
int Xor=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    Xor^=arr[i];
}

if(Xor==0){
    cout<<1<<endl;
    cout<<1<<" "<<n;
    return;
}

if(n%2==0){
    cout<<2<<endl;
    cout<<1<<" "<<n<<endl;
    cout<<1<<" "<<n;
return;
}
cout<<4<<endl;
cout<<1<<" "<<n-1<<endl;
cout<<1<<" "<<n-1<<endl;
cout<<2<<" "<<n<<endl;
cout<<2<<" "<<n;

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