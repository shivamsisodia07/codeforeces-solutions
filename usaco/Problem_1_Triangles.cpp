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
    vector<vector<int>> arr(n,vector<int>(2,0));
    for (int i = 0; i < n;i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    int ans = 0;
    int x1, x2, x3, y1, y2, y3;
    for (int i = 0; i < n;i++){
        x1 = arr[i][0], y1 = arr[i][1];
        for (int j = 0; j < n;j++){
            if(j==i) continue;
            

            if(arr[j][0]==x1){
                x2 = arr[j][0], y2 = arr[j][1];
                for (int k = 0; k < n; k++)
                {

                    if (k == i or k == j)
                        continue;

                    if (arr[k][1] ==y2){
                        x3 = arr[k][0], y3 = arr[k][1];
                        int h = abs(y2 - y1);
                        int l = abs(x3 - x2);

                        ans = max(ans, l * h);
                    }
                }
            }
          
        }
    }

    cout << ans<<"\n";
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
freopen("triangles.in", "r", stdin);
freopen("triangles.out", "w", stdout);
solve();
return 0;
}
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */