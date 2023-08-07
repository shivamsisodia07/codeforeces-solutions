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
    ll n;cin>>n;

    vector<ll>v(n,0);

    ll count=4;

    for(int i=1;i<n-1;i++){
        if(i==n/2)continue;
        v[i]=count;
        count++;
    }

    v[0]=2;
    v[n-1]=3;
    v[n/2]=1;

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
cout<<endl;
}
return 0;
}