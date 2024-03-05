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

void solve(){
    int n;string s;
    cin>>n>>s;

    int i=0,siz=s.length(),j=siz-1;
    bool flag=true;
    while(i<j){
        if(s[i]>s[j]){
            // cout<<s[i];
            flag=false;
            break;
        }
        else if(s[i]<s[j]){
            break;
        }
        i++;
        j--;
    }

    // cout<<flag<<" ";
    if(flag){
        if(n%2==0){
            cout<<s;
            return ;
        }
        string temp=s;
        reverse(s.begin(),s.end());
        temp+=s;
        cout<<temp;
        return ;
    }
    else{
        if(n%2!=0){
            reverse(s.begin(),s.end());
            cout<<s;
            return ;
        }
        reverse(s.begin(),s.end());
        n--;
        if(n%2==0){
            cout<<s;
            return ;
        }
        string temp=s;
        reverse(s.begin(),s.end());
        temp+=s;
        cout<<temp;
        return ;
        

    }

}
signed main(){
   ios::sync_with_stdio(0); cin.tie(0);
   int t;
   cin>>t;
   while(t--){
      solve();
      cout<<endl;
   }
   return 0;
}