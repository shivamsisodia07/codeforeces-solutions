#include <bits/stdc++.h>
using namespace std;
// #define ll long long;
// #define int long long;
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x);
void solve()
{
int n,k;cin>>n>>k;
if(k-2>35){
    cout<<0;
    return ;
}

int ans=0;
vector<int> v(36,1);
f(i,2,36){
    v[i]=v[i-1]+v[i-2];
}

int first=v[k-3];
int y=v[k-2];

f(i,0,n+1){
    if(n-(y*i)>=0 && (n-(y*i))%first==0){
        if(i>=(n-(y*i))/first){
            ans++;
        }
}
}
cout<<ans;
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
int t;
cin>>t;
while(t--){
solve();
cout<<"\n";
}
return 0;
}
