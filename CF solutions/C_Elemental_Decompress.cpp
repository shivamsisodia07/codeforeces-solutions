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
    vector<int> arr(n);
    f(i,0,n){
        cin >> arr[i];
    }
    vector<int> p(n,0), q(n,0);
    // vector<int> vis(n, 0);
    vector<pair<int, int>> v(n);
f(i,0,n){
        v.push_back({arr[i],i});
}
    sort(v.begin(), v.end());
    int count = 1;
    bool f = true;
    bool flag = true;
    for (int i = 0; i < v.size();i++){

if(count>n){
    flag = false;
    break;
}
   if(f){
       p[v[i].second]=max(count, v[i].first);
       q[v[i].second]=count;
       count++;
       f != f;
   }
   else{
       q[v[i].second]=max(count, v[i].first);
       p[v[i].second]=count;
       count++;
       f != f;
   }

    }

if(!f){
   cout << "NO"
        << "\n";
   return;
}

    cout << "YES"<<"\n";
    f(i,0,n){
   cout << p[i]<<" ";
    }
    cout << "\n";

     f(i,0,n){
   cout << q[i]<<" ";
    }
    
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