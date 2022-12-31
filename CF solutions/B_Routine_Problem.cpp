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

    ll x,y, a, b;
    cin >> x >> y >> a>> b;

    double t = (1.000 * ((double)b / a)) * x;
    int p, q;

    if(t>y){
        p = a * y * y;
        q = x * y * b;
    }else{
           p = b * x * x;
        q = x * y * a;
    }
    int k = __gcd(p, q);
    p /=k;
    q /= k;

    p = q - p;
    cout << p << "/" << q<<"\n";
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);

solve();

return 0;
}
