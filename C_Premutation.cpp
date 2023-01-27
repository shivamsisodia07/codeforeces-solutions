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
    vector<vector<int>> v(n, vector<int>(n - 1, 0));
    vector<int> ans;
    f(i, 0, n)
    {
        f(j, 0, n - 1)
        {
            cin >> v[i][j];
           
        }
   }
   int x = -1, y = -1,f=0;
   f(i, 0, n)
   {
    f(j, 0, n )
    {
        if(v[i][1]==v[j][0]){
            x = i;
            y = j;
            f = 1;
            break;
        }
    }
   if(f==1){
        break;

   }
    }
    cout << v[x][0] << " ";
    f(i,0,n-1){
   cout << v[y][i]<<" ";
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