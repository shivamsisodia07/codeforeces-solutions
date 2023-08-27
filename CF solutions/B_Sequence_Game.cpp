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
    int n;cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans;
    ans.pb(v[0]);

    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            ans.pb(v[i]);
        }
        else{
            ans.pb(1);
            ans.pb(v[i]);
        }
    }
cout<<ans.size()<<"\n";
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
solve();
cout<<"\n";
}
return 0;
}
