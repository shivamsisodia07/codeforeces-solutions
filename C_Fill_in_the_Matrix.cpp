#include <bits/stdc++.h>
#define int long long
using namespace std;
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI  3.14159265
#define prt(x) cout << (x);


int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
 
/*Function to left rotate arr[] of size n by d*/
void leftRotate(vector<int>&arr, int d, int n)
{
    /* To handle if d >= n */
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
void solve(){
int n,m;cin>>n>>m;

vector<int> arr(m,0);
vector<int>temp;
for(int i=0;i<m;i++){
    arr[i]=i;
    temp.pb(arr[i]);
}

vector<vector<int>>ans;

leftRotate(arr,1,m);

for(int i=0;i<min(n-1,m-1);i++){
    ans.pb(arr);
    leftRotate(arr,1,m);
}

leftRotate(temp,1,m);

for(int i=0;i<=n-ans.size();i++){
    ans.pb(temp);
}

cout<<m<<"\n";
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<"\n";
}

}
signed main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t;
   cin>>t;
   while(t--){
      solve();
    //   cout<<endl;
   }
   return 0;
}