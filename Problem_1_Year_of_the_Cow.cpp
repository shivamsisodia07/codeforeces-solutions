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
    cin >> n;
    map<string, int> person;
    person["Ox"] = 1, 
    person["Tiger"] = 2, 
    person["Rabbit"] = 3,
    person["Dragon"] = 4,
    person["Snake"] = 5, 
    person["Horse"] = 6, 
    person["Goat"] = 7, 
    person["Monkey"] = 8,
    person["Rooster"] = 9, 
    person["Dog"] = 10,
    person["Pig"] = 11,
    person["Rat"] = 12;
    map<string, string> mp;
    // map<string, int> mp1;
    mp["Bessie"] = "Ox";
    string a, b, c, d, e, f, g, h;
    int ans = 0;
    for (int i = 0; i < n;i++){
        cin >> a >> b >> c >> d >> e >> f >> g >> h;
    if(d=="previous"){
        // cout << 12 - person[e] + person[mp[h]]<<"\n";
        ans += 12 - person[e] + person[mp[h]];
        mp[a] = e;
    
    }
    else{

    if(person[e]>person[mp[h]]){
        //  cout <<  person[e] - person[mp[h]]<<"\n";
        ans+= person[e] - person[mp[h]];
        mp[a] = e;
    }
    else{
        //  cout << 12 - person[e] + person[mp[h]]<<"\n";
        ans-= 12 + person[e] - person[mp[h]];
        mp[a] = e;
    }
}

if(a=="Elsie"){
break;
}
    }
    cout << ans ;
}
int main(){

ios::sync_with_stdio(0); cin.tie(0);
ll t;
// cin>>t;
t = 1;
while(t--){
solve();
cout<<endl;
}
return 0;
}
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */