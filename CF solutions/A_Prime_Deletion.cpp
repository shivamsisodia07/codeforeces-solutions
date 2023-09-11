#include <bits/stdc++.h>
#define int long long
using namespace std;
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x);


vector<string>v;

string check(string s){

    for(int i=6;i<v.size();i++){
        int j=0;
        for(int k=0;k<s.size();k++){
            if(s[k]==v[i][j]){
                j++;
            }
            if(j==v[i].size()){
                return v[i];
            }
        }
    }
    return "NO";
}

void SieveOfEratosthenes(int n)
{
    bool prime[n];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {   
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for(int i=0;i<n;i++){
        if(prime[i]){
            v.pb(to_string(i));
        }
    }
}
void solve(){

    string s;cin>>s;
    SieveOfEratosthenes(10001);
    cout<<check(s);
}
signed main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t;
   cin>>t;
   while(t--){
      solve();
      cout<<endl;
   }
   return 0;
}