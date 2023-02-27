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
    ll x;
    cin >> x;
    int steps = 0;
    while (steps * (steps + 1) < 2 * x)
     {   steps++;}

    if (steps * (steps + 1) / 2 == x + 1)
        steps++;
    cout << steps;
   
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
