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
    ll arr[n];
    ll ans=INT_MIN;

    f(i,0,n){
        cin>>arr[i];
        ans=max(ans,arr[i]);
    }

    ll sum=0;

    for(int i=0;i<n;i+=2){
        if(arr[i]>0){
           sum+=arr[i];
           ans=max(ans,sum);
        }
    }
    sum=0;
    for(int i=1;i<n;i+=2){
        if(arr[i]>0){
           sum+=arr[i];
           ans=max(ans,sum);
        }
    }
cout<<ans;
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