#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
 int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

int diff=INT_MAX;
bool f=true;
for(int i=1;i<n;i++){
    diff=min(diff,abs(arr[i]-arr[i-1]));
    if(arr[i]<arr[i-1]){
        f=false;
    }
}

if(!f){
    cout<<0<<endl;
}
else{
    cout<<(diff/2)+1<<endl;
}

    }
   
}