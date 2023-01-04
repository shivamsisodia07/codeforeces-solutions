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
    vector<int>arr;
    for (int i = 2; i < sqrt(n);i++){
    if(n%i==0){
        arr.push_back(i);
    }
   
   if(arr.size()==3){
    break;
   }
    }

if(arr.size()==3){
   for (int i = 0; i < 3;i++){
   cout << arr[i] << " ";
    }
}else{
    cout << -1;
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