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
    ll x,y,n;cin>>x>>y>>n;

    vector<int>v;
    v.pb(y);
    int j=1;
    for(int i=y-j;i>x;i-=j){
        v.pb(i);
        j++;
        if(v.size()==n-1)break;
    }
    v.pb(x);
    reverse(v.begin(),v.end());
    if(v.size()!=n){
        cout<<"-1";
        return ;
    }
    j=v[1]-v[0];
    for(int i=1;i<n-1;i++){
        if(v[i+1]-v[i]>=j){
            cout<<"-1";
            return ;
        }
    }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
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
