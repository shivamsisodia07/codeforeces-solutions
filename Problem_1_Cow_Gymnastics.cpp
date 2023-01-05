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
    ll n,k;
    cin >> n >> k;

    vector<vector<int>>arr(n,vector<int>(k));

    for (int i = 0; i < n;i++){
        for (int j = 0; j < k;j++){
            cin >> arr[i][j];
        }
    }
    map<pair<int, int>, int >st;
    for (int i = 0; i < k-1;i++){
        for (int j = i+1; j < k;j++){
            st[{arr[0][i], arr[0][j]}]++;
        }
    }

    for (int i = 1; i < n;i++){

        for (int j = 0; j < k-1;j++){

            for (int l = j+1; l < k;l++){
          if (st[arr[i][j], arr[i][l]])
                {
                    st[arr[i]]
                }
            }
               
        }
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