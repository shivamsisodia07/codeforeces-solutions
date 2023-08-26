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

    ll a[n],b[n];

    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,n){
        cin>>b[i];
    }

    vector<pair<ll,ll>>ans;
    ll maxi=-1e10;
    f(i,0,n){
        ans.pb({a[i]-b[i],i+1});
        maxi=max(maxi,a[i]-b[i]);
    }
    vector<int>res;

    f(i,0,n){
        if(ans[i].first==maxi){
            res.pb(ans[i].second);
        }
    }
    cout<<res.size()<<"\n";

    for(auto it:res){
        cout<<it<<" ";
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
