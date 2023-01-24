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

int ans = 10;
void sol(int i,int n,string s,int a,int b,int t){

if(i>=n){
    return;
}

if(a> b + (n-i-1)/2 or b > a + (n-i-1)/2){
    ans = min(ans, t);
}

if(s[i]=='1'){

if(i%2==0) sol(i + 1, n, s, a, b + 1);
else sol(i + 1, n, s, a + 1, b );

}
else if(s[i]=='0'){
 sol(i + 1, n, s, a , b);
}
else{
if(i%2==0){
    sol(i + 1, n, s, a, b + 1, t + 1);
    sol(i + 1, n, s, a, b , t + 1);
}
else{
    sol(i + 1, n, s, a+1, b);
    sol(i + 1, n, s, a, b);
}
}

}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
 sol(0,n,s,0,0,0);
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