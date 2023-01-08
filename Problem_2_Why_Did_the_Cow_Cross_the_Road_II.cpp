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
    cin >> s;

    vector<vector<int>> arr(26, vector<int>(2, -1));
    int n = s.length();
    f(i,0,n){
        cout<< arr[s[i] - 'A'][0] << " ";
        if (arr[s[i]-'A'][0] == -1)
        {
            arr[s[i]-'A'][0] = i+1;
        }
else{
    arr[s[i] - 'A'][1] = i+1;
}
    }

f(i,0,26){
cout << arr[i][0] << arr[i][1] << " ";
}

    int st, en, count = 0;
    f(i, 0, n)
    {
st = arr[i][0];
en = arr[i][1];
f(j, 0, n)
{

    if(arr[j][0]<st and arr[j][1]<en){
        count++;
    }
}
}

cout << count << "\n";
}
int main(){
// ios::sync_with_stdio(0); cin.tie(0);
 string s;
    cin >> s;
    // cout <<s;
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