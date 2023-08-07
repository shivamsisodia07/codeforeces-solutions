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

   int n=s.length(),i=n-1,pos=-5,carry=0;

   while(i>=0){
    if(s[i]-'0' +carry>=5){
        pos=i-1;
        carry=1;
    }
    else{
        carry=0;
    }

    i--;
   }

// cout<<pos<<"\n";
if(pos==-5){
    cout<< s;
}
else if(pos==-1){
string ans="1";

f(i,0,n){
    ans+='0';
}

cout<<ans;
}
else{
//    cout<<pos;

    s[pos]=s[pos]+1;
    for(int i=pos+1;i<n;i++){
        s[i]='0';
    }

    cout<<s;
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
