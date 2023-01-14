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
    ll n, k;
    cin >> n >> k;

    vector<int> arr(n, 0);
    vector<int> ans;
    int mini = INT_MAX;
    priority_queue<pair<int,int>> pq;
    f(i,0,n){
        cin >> arr[i];
        pq.push({arr[i], i + 1});
    }

while(k--){
        pair<int, int> p = pq.top();
        pq.pop();
        ans.push_back(p.second);
        mini = min(mini,p.first);
}
sort(ans.begin(), ans.end());
cout << mini << "\n";
f(i,0,ans.size()){
        cout << ans[i] << " ";
}
cout << "\n";
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

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