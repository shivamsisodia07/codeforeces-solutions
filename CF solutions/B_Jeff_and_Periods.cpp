#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define pii pair<int, int>
#define pll pair<long long, long long>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back


/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool isprime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }


/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


//   vector<bool> seiveOfEr(int n){
//  vector<bool> is_prime(n+1, true);
//  is_prime[0] = is_prime[1] = false;
//  for (int i = 2; i * i <= n; i++) {
//   if (is_prime[i]) {
//   for (int j = i * i; j <= n; j += i)
//   is_prime[j] = false;
//    }}


int fastpower(int a,int b,int n){
 int ans = 1;

 while(b>0){
if(b&1==1){
    ans = (ans * a%n)%n;
    }
a = (a%n * a%n)%n;b /= 2;

  }
 return ans;
 }

void solve()
{
 ll n;
 cin >> n;
 vector<ll> arr(n);
 f(i,0,n){
cin >> arr[i];
 }
 map<int, vector<int>> mp;

 f(i,0,n){
mp[arr[i]].push_back(i);
 }

 set<pair<int, int>> st;
 for(auto it: mp)
 {
if (it.second.size() == 1)
{
    st.insert({it.first, 0});
}
else if(it.second.size()==2){
    st.insert({it.first, it.second[1] - it.second[0]});
}
else{
    int cd = it.second[1] - it.second[0];
    bool f = true;
    for (int i = 2; i < it.second.size();i++){

      if(it.second[i]-it.second[i-1]!=cd){
        f = false;break;
      }
    }

    if(f){
      st.insert({it.first, cd});
    }
}
}

cout << st.size() << endl;
for(auto it:st){
cout << it.first << " " << it.second << endl;
}
}
/* Main()  function */
int main(){

solve();

return 0;
}