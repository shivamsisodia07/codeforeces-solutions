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
   
}
int main(){
int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int> a(n, 0);
      map<int,int>m;
      for(int i=0;i<n;i++){
          cin>>a[i];
          m[a[i]]++;
      }
      sort(a.begin(),a.end());
      if(m.size()==1 && n!=1){
          cout<<"NO";
      }
      else{
         cout<<"YES"<<endl; 
      if(n==1){
          cout<<a[0]<<" ";
      }
      
      
 else if(n%2==0){
      int k=0;
      int f=n-1;
      for(int i=0;i<n/2;i++){
          cout<<a[k]<<" "<<a[f]<<" ";
          k++;
          f--;
          
      }
  } 
  else{
      int k=0;
      int f=n-1;
      for(int i=0;i<n/2;i++){
          cout<<a[k]<<" "<<a[f]<<" ";
          k++;
          f--;
      }
      cout<<a[n/2]<<" ";
  }}
  
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