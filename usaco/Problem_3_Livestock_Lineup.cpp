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
    string a, b ,f;
    vector<pair<string, string>> v;
    f(i,0,n){
        cin >> a >> b >> b >> b >> b >> f;
        v.push_back({a, f});
    }
    vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
    sort(cows.begin(), cows.end());

    while (next_permutation(cows.begin(), cows.end()))
    {
        bool f = true;
        for (auto it : v)
        {
            auto a = find(cows.begin(), cows.end(), it.first);
            auto b = find(cows.begin(), cows.end(), it.second);

            if(abs(a-b)!=1){
                f = false;
                break;
            }
        }
        if(f){
            break;
        }
}
for(auto it:cows){
        cout << it << "\n";
}

}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
freopen("lineup.in","r",stdin);
    freopen("lineup.out","w",stdout);
ll t;
t = 1;
// cin>>t;
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