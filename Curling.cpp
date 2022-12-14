cpp
#include <bits/stdc++.h>
using namespace std;

/* TYPES  */
#define ll long long
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

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

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
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

float distance(int x1, int y1)
{
    return sqrt(pow(x1, 2)*1.0 + pow(y1, 2)*1.0);
}

void solve(ll l){
    ll rx, ry;
    cin >> rx >> ry;
    float dis = rx + ry;
    ll R;
    cin >> R;
    ll ansR=0;
    for (int i = 0; i < R;i++){
        ll a, b;
        cin >> a >> b;

       if(distance(a,b)<= dis){
            ansR++;
        }
    }

    ll Y;
    cin >> Y;
    ll ansY=0;
    for (int i = 0; i < Y;i++){
        ll a, b;
        cin >> a >> b;

        if(distance(a,b)<=dis){
            ansY++;
        }
    }

    if(ansR>ansY){
        ansR = ansR - ansY;
        ansY = 0;
    }
     if(ansR<ansY){
        ansY = ansY - ansR;
        ansR = 0;
    }
    

  cout<<"Case #"<<l<<": "<< ansR << " " << ansY<<endl;
}
/* Main()  function */
int main()
{
    ll t;
    ll l = 1;
    cin >> t;
    while(l<=t){

        solve(l);
        l++;
    }
    return 0;
}