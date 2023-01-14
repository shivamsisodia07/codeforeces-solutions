#include <bits/stdc++.h>
using namespace std;

int solve(int i,int n,vector<int>&arr,vector<int>&dp)
{
    if(i==n-1){
        return 0;
    }
    if(dp[i]!=-1){
    return dp[i];
  }
  int a = INT_MAX, b = INT_MAX;
 if(i+1<n) a = solve(i + 1, n, arr, dp) + abs(arr[i] - arr[i + 1]);
 if(i+2<n) b = solve(i + 2, n, arr, dp) + abs(arr[i] - arr[i + 2]);

  return dp[i]=min(a,b);
}

int main(){
 long long n;cin>>n;
  vector<int>arr(n+2,0);
  
  for(int i=0;i<n;i++)
  {
  cin>>arr[i];
  }
  vector<int> dp(n + 2, -1);
  dp[n - 1] = 0;
  for (int i = n-2; i >=0;i--){

 int a = INT_MAX, b = INT_MAX;
 if(i+1<n) a = dp[i + 1] + abs(arr[i] - arr[i + 1]);
 if(i+2<n) b = dp[i + 2] + abs(arr[i] - arr[i + 2]);

  dp[i]=min(a,b);

  }

  cout <<  dp[0]<< "\n";
  return 0;
}