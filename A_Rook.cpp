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
    string s;
    cin>>s;

    char ch=s[0];
    int d=s[1]-'0';

    for(int i=1;i<=8;i++){
        if(i!=d)cout<<ch<<i<<"\n";
    }
    set<char>st={'a','b','c','d','e','f','g','h'};
    
    for(auto it:st){ 
        if(ch!=it)cout<<it<<d<<"\n";
    }
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