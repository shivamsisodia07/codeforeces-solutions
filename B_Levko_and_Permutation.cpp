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
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
f(i,0,n){
    v[i] = i + 1;
}
int d = n - k;

if(d==0){
    cout << -1 << "\n";
    return;
}

else if(d%2!=0 and d!=1){
     int i = 1;
     d--;
     while (i < n and d > 0)
     {
         swap(v[i], v[i + 1]);
         i += 2;
         d -= 2;
    }
}
else if(d%2==0) {
    int i = 0;
    while( i<n and d>0){
        swap(v[i], v[i + 1]);
        i += 2;
        d-= 2;
    }
}
f(i,0,n){
        cout << v[i] << " ";
    }
    
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);

solve();
cout<<endl;

return 0;
}
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */