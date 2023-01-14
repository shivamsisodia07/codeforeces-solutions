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

bool istaxi(string &a){
 char ch = a[0];
    bool f = true;
      for (int j = 0; j <8;j++)
    {
        if(j==2 and j==5){
            continue;
        }
        if (ch != a[j] )
        {
      f = false;
        }

}
return f;
}

bool ispizza(string &a){
 char ch = a[0];
    bool f = true;
      for (int j = 0; j <8;j++)
    {
        if(j==2 and j==5){
            continue;
        }
        if (ch > a[j] )
        {
      f = false;
        }

        ch = a[j];
}
return f;
}

void solve()
{
    ll n;
    cin >> n;
    set<string> piz,taxi,girl;


f(i,0,n){
    int a;
    string s;
    cin >>a>> s;

f(i,0,a){
    string l;
    cin >> l;

   
}

if(f){
        piz.insert(s);
}
else{
  
    bool f = true;
    char t=l[0];
    for (int j = 0; j <8;j+=2)
    {
      if (i == 2 and i==5){
        continue;
      }
          if (ch >= l[j])
          {
              f = false;
          }
                ch = l[j];
                }

    if (f ){
            taxi.insert(s);
    }else{
            girl.insert(s);
    }
}
}
}
cout << "If you want to call a taxi, you should call:";

for (auto it:taxi){
cout << it << ",";
}
cout << "\n";

cout << "If you want to order a pizza, you should call:";
for (auto it:piz){
cout << it << ",";
}
cout << "\n";


cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
for (auto it:girl){
cout <<it << ",";
}
cout << "\n";
}



int main(){
ios::sync_with_stdio(0); cin.tie(0);

solve();

return 0;
}
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */