#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.14159265
#define prt(x) cout << (x);
void solve()
{
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    ll count1 = 0, count2 = 0;

    f(i, 1, n)
    {
        if (a[i] == a[i - 1])
        {
            count1++;
        }
    }
    f(i, 1, m)
    {
        if (b[i] == b[i - 1])
        {
            count2++;
        }
    }

if(count1==0 and count2==0){
        cout << "YES";
        return;
}
    if ((count1 > 1 || count2 > 1) || (count1 == 1 && count2 == 1))
    {
        cout << "NO";
        return;
    }
    else if (( count2 == 1 && count1 == 1 ) || (a[n - 1] == b[m - 1]))
    {
        cout << "NO";
        return;
    }
    
        cout << "YES";
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
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