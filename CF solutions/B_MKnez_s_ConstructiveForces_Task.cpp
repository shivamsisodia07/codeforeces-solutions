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

    vector<int> arr;
    if(n%2==0){
        
        for (int i = 0; i < n/2;i++){
            arr.push_back(1);
            arr.push_back(-1);
        }

        cout << "YES"
             << "\n";
        for (int i = 0; i < arr.size();i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    else if(n==3){
        cout << "NO"<<"\n";
    }
    else{
         for (int i = 0; i < n/2;i++){
           arr.push_back(-1*n/2 +1); 
            arr.push_back((n/2) );
           
        }
    arr.push_back(-1*n/2 +1);

     cout << "YES"
             << "\n";
        for (int i = 0; i < arr.size();i++){
            cout << arr[i] << " ";
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