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
    ll a[n*(n-1)/2];
    ll maxi=INT_MIN;
    f(i,0,n*(n-1)/2){
        cin>>a[i]; 
        maxi=max(maxi,a[i]);    
    }

    sort(a,a+n*(n-1)/2);

    ll count=n-1,i=0;
    vector<int>ans;

    while(i<n*(n-1)/2){
        ans.pb(a[i]);
        i+=count;
        count--;
    }
  
    int temp=ans.size();

    f(i,0,n-temp){
        ans.pb(maxi);
    }
    
    for(auto x:ans){
        cout<<x<<" ";
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
