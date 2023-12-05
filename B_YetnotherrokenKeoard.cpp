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
    
    int cnt1=0,cnt2=0,n=s.length();
    string ans="";
    for(int i=n-1;i>=0;i--){
        if(s[i]=='b'){
            cnt2++;
        }
        else if(s[i]=='B'){
            cnt1++;
        }
        else if(s[i]>=65 && s[i]<=90){
            if(cnt1>0){
                cnt1--;
            }
            else{
                ans+=s[i];
            }
        }
        else{
            if(cnt2>0){
                cnt2--;
            }
            else{
                ans+=s[i];
            }
        }
    
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
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