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

int main(){

ifstream cin("pails.in");
ofstream cout("pails.out");

    int X, Y, M;
    cin >> X >> Y >> M;
    int ans = 0,d,rem,l;

    for (int i = 0; i <= M/X;i++){
        d = X * i;
        rem = M - d;
        l = rem / Y;
        ans = max(ans, X*i + Y*l);
    }
    cout << ans<<"\n";

return 0;
}
