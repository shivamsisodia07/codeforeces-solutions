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
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        vector<int>ans;
        bool ok = true;
        for(auto x:s){
            if(x != c){
                ok = false;
            }
        }
        if(!ok){
            f(i,1,n+1){
                ok = true;
                f(j,i,n+1){
                    ok &= (s[j-1] == c);
                    j += i-1;
                }
                if(ok){
                    ans.pb(i);
                    break;
                }
            }
            if(!ok){
                ans.pb(n);
                ans.pb(n-1);
            }
        }
        cout<<ans.size()<<"\n";
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<"\n";
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
solve();

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