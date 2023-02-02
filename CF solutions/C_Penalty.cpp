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
    string s;
    cin >> s;
    int ans = 10;
    int a = 0, b = 0,counta=0,countb=0;

    for (int i = 0; i < 10;i++){


if(i&1==1){
if(s[i]=='?' or s[i]=='1'){
    a++;
}
}
else{
if(s[i]=='1'){
    b++;
}
countb++;
}

if(a>b+5-countb){
    ans = min(ans, i+1);
}
    }
    // cout << ans << " ";
    a = 0, b = 0;
    for (int i = 0; i < 10;i++){

if(i&1==1){
if( s[i]=='1'){
    a++;
}
counta++;
}
else{
if(s[i]=='?' or s[i]=='1'){
    b++;
}
}
if(b>a+5-counta){
    ans = min(ans, i+1);
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