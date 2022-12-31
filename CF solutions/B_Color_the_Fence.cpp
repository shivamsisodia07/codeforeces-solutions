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
    vector<int> arr(9);
    int val = INT_MAX;
    int idx = 9;
    f(i, 0, 9)
    {
        cin >> arr[i];
}

rf(i,9,0){
     if(val>arr[i]){
            val = arr[i];
            idx = i + 1;
        }
}
int len = n / val;
int rem = n % val;
string ans="";
bool f = true;

while(f){
        f = false;

        for (int i = 8; i >= idx;i--){
if(val+rem>=arr[i]){

    ans += to_string(i + 1);
    rem -= (arr[i]-val);
    f = true;
    len--;
    break;
}
        }
}

f(i,0,len){
        ans += to_string(idx);
}

if(ans.size()==0){
 prt(-1);
return;
}
       
prt(ans);
}
int main(){
ios::sync_with_stdio(0); cin.tie(0);

solve();
cout<<endl;

return 0;
}
