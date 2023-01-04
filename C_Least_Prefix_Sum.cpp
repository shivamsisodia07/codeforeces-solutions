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

    vector<ll> arr(n);
    vector<ll> presum(n);

    ll sum = 0;
    f(i,0,n){
        cin >> arr[i];
        sum += arr[i];
        presum.push_back(sum);
    }

    ll l = INT_MAX;
    f(i, 0, n)
    {
        l = min(l, presum[i]);
}

if(l>=presum[k-1]){
        cout << 0;
}

else{
        priority_queue<int> pq;
        f(i, 0, m)
        {
            pq.push()

    }
        int d = presum[k - 1] - l;

        while(d--){

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