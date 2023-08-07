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
     
     int n;
    cin>>n;
    int dep[n],arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
     for(int i=0;i<n;i++){
        cin>>dep[i];
           mp[dep[i]]++;
    }
    
    int i=1,j=0,count=1,ans=1;
    
    for(auto it:mp){
        ans=max(ans,it.second);
    }
    
    
    cout<<ans<<"\n";
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
solve();
// cout<<endl;
}
return 0;
}