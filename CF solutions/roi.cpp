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
void util()
{
    int n; cin>>n;
    vector<vector<int>> st_array(n, vector<int>(3));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin>>st_array[i][j];
        }
    }
    int m; cin>>m;
    vector<vector<int>> tm_array(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>tm_array[i][j];
        }
    }
    int dd; cin>>dd;
    ll ans1 = 0, ans2 = 0;
    for(int i = 0; i < n; i++){
        if(st_array[i][1] < dd){
            if(st_array[i][2] != 0 && st_array[i][2] <= dd){
                ans1 += (tm_array[i][st_array[i][2] - 1] - tm_array[i][st_array[i][1] - 1]) * st_array[i][0];
            }
            else{
                ans2 += (tm_array[i][dd - 1] - tm_array[i][st_array[i][1] - 1]) * st_array[i][0];
            }
        }
       
    }
    cout<<ans1<<endl;
    cout<<ans2<<endl;
}
signed main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t=1;
   cin>>t;
   while(t--){
      util();
      cout<<endl;
   }
   return 0;
}