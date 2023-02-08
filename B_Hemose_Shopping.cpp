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
    ll n,x;
    cin >> n>>x;

    vector<int> v(n);
    
    f(i,0,n) cin >> v[i];

    if(x==n){
        bool f = true;

f(i,1,v.size()){
if(v[i]<v[i-1]){
    f = false;break;
}}

if(f)
{
    cout << "YES";
    }
     else{
cout << "NO";
     }
        return;
    }
if(x<=n/2){
        cout << "YES";
        return ;
}
vector<int> arr;
x = n - x;
for (int i = 0; i <x;i++){
        arr.push_back(v[i]);
}
for (int i = n-1; i>=n-x;i--){
        arr.push_back(v[i]);
}
sort(arr.begin(), arr.end());


vector<int> vv;

f(i,0,arr.size()/2){
        vv.push_back(arr[i]);
}
f(i,x,n-x){
        vv.push_back(v[i]);
}
f(i,arr.size()/2,arr.size()){
        vv.push_back(arr[i]);
}
bool f = true;

f(i,1,vv.size()){

if(vv[i]<vv[i-1]){
    f = false;
    break;
}

}

if(f)
{
    cout << "YES";}

     else{
cout << "NO";
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