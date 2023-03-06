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
    vector<vector<int>> arr(2, vector<int>(n,0));
      vector<int> pre1(n, 0);
    vector<int> pre2(n, 0);
    
f(i,0,n){
    cin >> arr[0][i];
}
f(i,0,n){
    cin >> arr[1][i];
}

        rf(j,n,0){
            if(j<n-1){
                pre1[j] += pre1[j + 1];
            }
            pre1[j] += arr[0][j];
        }
    f(j,0,n){
             if(j>0){
                pre2[j] += pre2[j - 1];
            }
            pre2[j] += arr[1][j];
        }
        int ans = INT_MAX;

        int a, b;
        f(i,0,n){

            a = 0, b =0;

if(i>0){
                b = pre2[i - 1];
}
if(i<n-1){
                a = pre1[i + 1];
}

ans = min(ans, max(a, b));
        }

if(ans==INT_MAX){
cout << 0;
return;
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