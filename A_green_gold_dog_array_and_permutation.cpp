#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>nums(n,0);
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        pq.push({nums[i],i});
    }

    int i=1;
    vector<int>res(n,0);
    while(i<=n){
        pair<int,int> p=pq.top();
        pq.pop();
        res[p.second]=i;
        i++;
    }


for(int i=0;i<n;i++){
    cout<<res[i]<<" ";
}

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