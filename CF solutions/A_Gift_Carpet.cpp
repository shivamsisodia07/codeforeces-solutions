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
    int n,m;
    cin>>n>>m;

    vector<string>v;

    for(int i=0;i<n;i++){
            string a;
            cin>>a;
            v.push_back(a);
        
    }
    string s="vika";
    int k=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[j][i]==s[k]){
                
                k++;
                break;
            }
        }
    }
    
    if(k>=4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
solve();
cout<<"\n";
}
return 0;
}
