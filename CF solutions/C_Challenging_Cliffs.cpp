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
    sort(arr.begin(), arr.end());
    if(n==2){
        cout << arr[0] << " " << arr[1];
        return;
    }
    int diff = INT_MAX;
    int d;
    int st=-1,en=-1;

    f(i,1,n){
        d = abs(arr[i] - arr[i - 1]);
        if(d<diff){
            st = i-1;
            en = i;
            diff = d;
        }
    }
    
   for (int i = en;i < n; i++){
            cout << arr[i] << " ";
        }
        for(int i = 0;i < en; i++){
            cout << arr[i] << " ";
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