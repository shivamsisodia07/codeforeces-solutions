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
    ll n;
    cin >> n;
    string s;
    cin >> s;

    int zeros = 0;
    f(i,0,n){
        if(s[i]=='0'){
            zeros++;
        }
    }
    if(zeros==0){
        cout << "DRAW";
    }
    if (zeros==1)
    {
        cout << "BOB";
        return;}

if(zeros%2){
    cout << "ALICE";
    return;
}
   cout << "BOB";
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