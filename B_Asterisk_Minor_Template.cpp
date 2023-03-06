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
    string a, b;
    cin >> a;
    cin >> b;
    int n = a.size();
    int m = b.size();
    if (a[0] == b[0])
    {
        cout << "YES"
             << "\n";
        cout << a[0] << "*"<<"\n";
        return;
}
else if(a[n-1]==b[m-1]){
      cout << "YES"
             << "\n";
        cout <<"*"<< a[n-1]<<"\n";
         return;
}
else{

        for (int i = 0; i < n - 1;i++){
            string k = a.substr(i, 2);

            if (b.find(k) != std::string::npos) {
               cout << "YES"
             << "\n";
               cout << "*" << k << "*"<<"\n";
               return;
        }
        }

}
cout << "NO"<<"\n";
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
solve();

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