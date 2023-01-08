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

    vector<vector<int>> arr(n, vector<int>(n, 0));
    int mini = 1;
    int maxi = n * n;
    for (int i = 0; i < n; i++)
    {
if(i%2==0){
     for (int j = 0; j < n;j++){
if(j%2==0){
    arr[i][j] = mini;
    mini++;
}
else{
    arr[i][j] = maxi;
    maxi--;
}
     }
}
else{
 for (int j = n-1; j >=0;j--){
if(j%2!=0){
    arr[i][j] = mini;
    mini++;
}
else{
    arr[i][j] = maxi;
    maxi--;
}
     }
        }
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
     cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
solve();
// cout<<endl;
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