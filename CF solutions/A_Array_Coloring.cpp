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

    ll a[n];
    int oddcount=0,evencount=0;
    f(i,0,n){
        cin>>a[i];
        if(a[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }

    if(oddcount==0){
        prt("YES");
    }
    else if(oddcount%2!=0){
        prt("NO");
    }
    else{
        prt("YES");
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
