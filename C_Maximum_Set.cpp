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
    ll l, r;
    cin >> l >> r;
    int count = 0, maxsize = INT_MIN;
    int siz = 0;
    int j = 0;
    for (int i = l; i < r; i++)
    {

        siz = 1;
        j = i;
        int k = r / i;
        while (k--)
        {
            while (j * k <= r)
            {
                siz++;
                j = j * 2;
            }
            if (siz >= 2)
            {
                maxsize = max(maxsize, siz);
                count++;
            }
        }
    }
    cout << maxsize << " " << count;
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