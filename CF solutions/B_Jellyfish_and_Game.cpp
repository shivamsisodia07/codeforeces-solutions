#include <bits/stdc++.h>
#define int long long
using namespace std;
#define f(i,s,e) for( int i=s;i<e;i++)
#define rf(i,e,s) for( int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x);



void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<int>nums1(n,0);
    vector<int>nums2(m,0);
    vector<multiset<int>>v(2);

    int mn=INT_MAX,mx=INT_MIN;

    f(i,0,n){
        cin>>nums1[i];
        v[0].insert(nums1[i]);
        mn=min(mn,nums1[i]);
        mx=max(mx,nums1[i]);
    }
    f(i,0,m){
        cin>>nums2[i];
        v[1].insert(nums2[i]);
        mn=min(mn,nums2[i]);
        mx=max(mx,nums2[i]);
    }

    auto erase =[&](int idx,int val){
        v[idx].erase(v[idx].find(val));
    };
    int turn=0;

    while(k>0){
        int sm= *v[turn].begin();
        int bg= *v[turn^1].rbegin();
        if(sm==mn && bg==mx){
            k&=1;
            if(k==0)break;
        }
        if(sm<bg){
            erase(turn,sm);
            erase(turn^1,bg);
            v[turn].insert(bg);
            v[turn^1].insert(sm);
        }
        k--;
        turn^=1;
    }

    int ans=0;
    for(auto &it:v[0]) ans+=it;

    cout<<ans;
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