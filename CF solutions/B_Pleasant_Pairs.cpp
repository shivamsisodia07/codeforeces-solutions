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
cin >> n;

vector<int> arr(n, 0);
unordered_map<int, int> mp;

f(i,0,n){
    cin >> arr[i];
    mp[arr[i]]=i+1;
}

int ans = 0;
f(i,3,2*n){
    for(int j=1;j*j<i;j++){

if(i%j==0 and j*j!=i and mp[j] and mp[i/j] and mp[j]+mp[i/j]==i ){
    ans++;
}

    }
}

cout << ans;
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
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */