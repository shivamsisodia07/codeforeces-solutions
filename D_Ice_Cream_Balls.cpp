#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x);

// int s1(int n){
   
//     return ans;
// }

void solve()
{
int n,c;
cin>>n;
int l=1,h=10000000000,mid,ans=1;

    while(l<=h){
        mid=(l+h)/2;
        int x=mid*(mid-1)/2;
        if(x==n){
            ans=mid;
            break;
        }
        if(x<n){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        } 
    }
c=ans*(ans-1)/2;
c=n-c;
ans+=c;
cout<<ans;
}
int32_t main(){
ios::sync_with_stdio(0); cin.tie(0);
int t;
cin>>t;
while(t--){
solve();
cout<<"\n";
}
return 0;
}
