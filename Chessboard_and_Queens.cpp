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

void sol(int i,int n,  vector<vector<char>> &arr){

    for (int i = 0; i < 8;i++){
        for (int j = 0; j < 8;j++){
            if(arr[i][j]=='.' and safe(i,j,arr)){


            }
        }
    }
}

void solve()
{
    vector<vector<char>> arr(8,vector<char>(8));
    f(i,0,8){
        f(j,0,8){
            cin >> arr[i][j];
        }
    }

    sol(0, 8, arr);
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
// cin>>t;
t = 1;
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