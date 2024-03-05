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
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    vector<int>freq(1e5+1,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    
    int temp=-1;

    for(int i=0;i<freq.size();i++){
        if(freq[i]==0){
            break;
        }
        else if(freq[i]==k){
            temp=i;
        }
        else if(freq[i]<k && temp=-1){
            cout<<-1<<"\n";
            return ;
        }
    }

    for(int i=0;i<freq[temp];i++){

    }

}
signed main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t;
   cin>>t;
   while(t--){
      solve();
      
   }
   return 0;
}