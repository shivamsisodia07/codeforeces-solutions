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
    cin>>n;
   
    vector<int>v(n,0);
    f(i,0,n){
        cin>>v[i];
    }
    int x=*max_element(v.begin(),v.end());
    if(x>n){
        cout<<"NO";
        return;
    }

    vector<int>v1(n+1,0);
    for(int i=0;i<n;i++){
        v1[0]++;
        v1[v[i]]--;
    }

    int v2=0;
    for(int i=0;i<n;i++){
        v2+=v1[i];
       v1[i]=v2;
    }

    bool flag=true;
    for(int i=0;i<n;i++){
        if(v1[i]!=v[i]){
            flag=false;
            break;
        }
    }
    
    cout<<(flag?"YES":"NO");
    
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
