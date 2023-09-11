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
    string a,b;cin>>a>>b;
    int n=a.size();

    if(a==b){
        cout<<"YES";
        return;
    }

for(int i=0;i<n-1;i++){
    if(a[i]=='0' && b[i]=='0' && a[i+1]=='1' && b[i+1]=='1'){
        cout<<"YES";
        return;
    }
}

cout<<"NO";


    // string ans="NO";
    // for(int i=0;i<n;i++){
    //     if(a[i]!=b[i] ){
    //         break;
    //     }
    //     if(a[i]==b[i] && a[i]=='1'){
    //        for(int j=i+1;j<n;j++){
    //         a[i]='1';
    //         b[i]='1';
    //        }
    //        break;
    //     }
    // }

    //  if(a==b){
    //     cout<<"YES";
    //     return;
    // }

    //  for(int i=n-1;i>=0;i--){
    //     if(a[i]!=b[i] ){
    //         break;
    //     }
    //     if(a[i]==b[i] && a[i]=='0'){
    //       for(int j=i-1;j>=0;j--){
    //         a[i]='0';
    //         b[i]='0';
    //        }
    //        break;
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     if(a[i]!=b[i]){
    //         cout<<"NO";
    //         return;
    //     }
    // }
   
    // cout<<"YES";

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