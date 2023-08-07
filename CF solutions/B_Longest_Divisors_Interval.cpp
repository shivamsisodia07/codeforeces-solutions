#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
int sqrt(int x)
{
    double result = exp(log(x) / 2);
    int floorResult = floor(result);
    if (floorResult * floorResult == x) {
        return floorResult;
    }
    else {
        return floorResult;
    }
}
void solve()
{
    ll n;cin>>n;
   int max_interval = 0;
  int current_interval_size = 1;
  while (current_interval_size <= n) {
    if (n % current_interval_size == 0) {
      max_interval = max(max_interval, current_interval_size);
      current_interval_size = current_interval_size * 2;
    } else {
      current_interval_size++;
    }
  }

  cout<<max_interval;
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
solve();
cout<<'\n';
}
return 0;
}
