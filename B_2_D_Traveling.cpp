#include <bits/stdc++.h>
#define int long long
using namespace std;
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x);
#define INT_MAx 1e10
#define INT_MIn -1e10
void solve(){
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<vector<int>>arr(n,vector<int>(2,0));

    for(int i=0;i<n;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }

    int mindist=INT_MAx,dist1=INT_MAx,dist2=INT_MAx;
    mindist=min(mindist,abs(arr[a-1][0]-arr[b-1][0])+abs(arr[a-1][1]-arr[b-1][1]));

    for(int i=0;i<k;i++){
        dist2=min(dist2,abs(arr[i][0]-arr[b-1][0])+abs(arr[i][1]-arr[b-1][1]));
        dist1=min(dist1,abs(arr[i][0]-arr[a-1][0])+abs(arr[i][1]-arr[a-1][1]));
    }
if(k>0)mindist=min(mindist,dist1+dist2);

    cout<<mindist;
}
signed main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t;
   cin>>t;
   while(t--){
      solve();
      cout<<endl;
   }
   return 0;
}