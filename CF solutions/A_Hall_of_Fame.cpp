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
    int ans = -1,idxL=-1,idxR=-1;

    bool f = true;
    for (int i = 0; i < s.size() - 1;i++){

        if(s[i]=='R' and s[i+1]=='L'){
            idxR = i + 1;
            break;
        }
if(s[i]=='L' and s[i+1]=='R'){
            idxL = i + 1;
            break;
        }
        
    }

if(idxR!=-1){
        cout << 0;
}
else if(idxL!=-1){
        cout << idxL ;
}
else{
      
}
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