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
    vector<ll> arr(n+2);
    map<ll, ll> mp;
    ll sum = 0,temp=0;
    f(i,0,n+2){
        cin >> arr[i];
        sum += arr[i];
        mp[arr[i]]++;
    }
    // sort(arr.begin(), arr.end());
    
    for (int i = n+1; i >=0;i--){
        mp[arr[i]]--;
        temp = sum - arr[i];
        if(temp%2==0){
        
        if(mp[temp/2]!=0){
            // cout << temp / 2<<"\n";
            mp[temp / 2]--;

            for(auto it:mp){
                for (int k = 0; k < it.second;k++){
              cout << it.first << " ";
                }
                   
            }
            return;
        }

        }
        mp[arr[i]]++;
        }
        cout << -1;
    
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