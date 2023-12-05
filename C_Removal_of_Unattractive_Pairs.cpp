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
    int n;string s;
    cin>>n>>s;

   vector<int>arr(26,0);

   for(int i=0;i<n;i++){
    arr[s[i]-'a']++;
   }
    int maxfreq=0;

    for(int i=0;i<26;i++){
        maxfreq=max(maxfreq,arr[i]);
    }

    if(maxfreq>=n-maxfreq){
        cout<<2*maxfreq -n;
        return;
    }

    cout<<n%2;
return;

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