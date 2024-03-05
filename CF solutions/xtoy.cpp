#include <bits/stdc++.h>
using namespace std;
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x);
typedef long long ll;
#define vi vector<int>
#define all(a) (a).begin() , (a).end()
#define sz(a) ((int)((a).size()))
const ll INF = 1e9;

vector<vi> dp(1e4+1 , vi(1e4+1 , -1));

int helper(int i , int j , int int_s , int int_r , string &str_x , string &str_y , string &str_y1)
{
    if(i>j)return 0;
    if(dp[i][j] != -1)return dp[i][j];

    int mini = 1e9;
    f(k,i,j+1)
    {
        
        if(str_y1.find(str_x.substr(i , k-i+1)) != string::npos)mini = min(mini , int_r+helper(k+1 , j , int_s , int_r , str_x , str_y , str_y1));
        if(str_y.find(str_x.substr(i , k-i+1)) != string::npos)mini = min(mini , int_s+helper(k+1 , j , int_s , int_r , str_x , str_y , str_y1));
    }

    return dp[i][j]=mini;
}
int util(int int_s , int int_r , string &str_x, string &str_y)
{
    string str_y1 = str_y;
    reverse(all(str_y1));
    return helper(0 , sz(str_x)-1 , int_s, int_r , str_x , str_y , str_y1);
}

int32_t main(){

    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);

    string str_x , str_y;
    cin >> str_x >> str_y;
    int int_s, int_r;
    cin >> int_s >> int_r;
    int ans = util(int_s , int_r, str_x , str_y);
    cout << ans;

    return 0;
}