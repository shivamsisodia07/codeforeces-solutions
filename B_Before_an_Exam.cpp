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

void solve()
{
    ll d, sumtime;
    cin >> d >> sumtime;

    vector<pair<int, int>> time(d);
    ll mintime = 0,maxtime=0;
    f(i,0,d){
        cin >> time[i].first >> time[i].second;
        mintime += time[i].first;
        maxtime += time[i].second;
    }


    
    if(sumtime>=mintime and sumtime <=maxtime){
        cout << "YES" << endl;
        int k = sumtime - mintime;

        f(i, 0, d)
        {
           if(k>=0){
               int diff = time[i].second - time[i].first;

               if(diff>k ){
 cout << time[i].first +k << " ";
 k = 0;
               }
               else{
 cout << time[i].first + diff << " ";
 k = k - diff;
               }
           }
           else{
               cout << time[i].first << " ";
           }
    }

    }
else{
        cout << "NO" << endl;
    }






}

/* Main()  function */
int main(){

solve();

return 0;
}
