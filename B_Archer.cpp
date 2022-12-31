#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x)<<"\n";
void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    double p = (double)a / b,q = (double)c / d;
    double l = 1 - p, x = 1 - q;
    double W = (double)p/ (1-(l*x));
    prt(W);
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);

solve();
return 0;
}