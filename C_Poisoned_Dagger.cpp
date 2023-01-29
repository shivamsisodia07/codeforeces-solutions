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
    ll n, h;
    cin >> n >> h;


    vector<int> damage(n);
    vector<int> diff;

    f(i,0,n){
        cin >> damage[i];
    }
    
    f(i,1,n){
        diff.push_back(damage[i] - damage[i - 1]-1);
    }
if(n==1){
    cout<<h;
    return;
}
    int sum = 0;
    f(i,1,h){
        sum = 0;
        f(j,0,diff.size()){
            if(diff[j]<=i){
                sum += diff[j];
            }
            else{
                sum += i-1;
            }
        }

        if(sum+i>=h-n+1){
            cout << i;
            return;
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