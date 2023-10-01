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
string s;cin>>s;

vector<int> ans(n+1);

int count=0,ones=0,zeros=0;

int i=0,j=n-1;

while(i<j){
    if(s[i]!=s[j])count++;
    if(s[i]==s[j] && (s[i]=='0'))ones++;
    else if(s[i]==s[j] && (s[i]=='1'))  zeros++;

    i++;j--;
}

if(count==0)ans[0]=1;
int v=0;
if(n&1)v=1;

for(int i=1;i<=n;i++){
    if(count>i)continue;

    int y=i-count;

    if((y>(ones*2+zeros*2)+v))continue;

    if(y&1){
        if(n%2==0){
            continue;
        }
        else{
            ans[i]=1;
        }
    }
    else{
        ans[i]=1;
    }
}


for(int i=0;i<=n;i++){
    cout<<ans[i];
}}
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