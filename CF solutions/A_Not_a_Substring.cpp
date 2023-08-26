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
    string s;
    cin>>s;
    string ans="";
    for(int i=1;i<n;i+=2){
        if(s[i-1]==')' && s[i]=='('){
            ans+="(())";
        }
        else if(s[i-1]='(' && s[i]==')'){
            continue;
        }
        else if(s[i-1]='(' && s[i]=='('){
            
        }
        else{

        }
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
