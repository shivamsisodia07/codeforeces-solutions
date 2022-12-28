#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define lli long long int
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back


/* UTILS */
#define mod 1000003
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


  vector<bool> seiveOfEr(int n){
 vector<bool> is_prime(n+1, true);
 is_prime[0] = is_prime[1] = false;
 for (int i = 2; i * i <= n; i++) {
  if (is_prime[i]) {
  for (int j = i * i; j <= n; j += i)
  is_prime[j] = false;
   }}
 return is_prime;
  }

ll fastpower(ll a,ll b){
 ll ans = 1;

 while(b>0){
if(b&1==1){
    ans = (ans%mod * a%mod)%mod;
    }
a = (a%mod * a%mod)%mod;
b /= 2;

  }
 return ans%mod;
 }

void solve()
{
 string s;
 cin >> s;

 map<char, string> mp;

mp['>']="1000";
mp['<']="1001";
mp['+']="1010";
mp['-']="1011";
mp['.']="1100";
mp[',']="1101";
mp['[']="1110";
mp[']']="1111";

string ans = "";
int i=0,j;
for ( i = 0; i < s.size();i++){
ans += mp[s[i]];
}
// cout << ans << endl;

ll result = 0;
for (i = ans.length()-1; i >= 0;i--){
    if(ans[i]=='1'){
j=fastpower(2, ans.length() - 1 - i);
result += j;
//   cout << j << " ";
    }

  
}

cout << result%mod << endl;
}
/* Main()  function */
int main(){

solve();

return 0;
}