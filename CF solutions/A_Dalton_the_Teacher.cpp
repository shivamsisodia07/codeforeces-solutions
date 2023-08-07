#include <iostream>
#include <vector>
using namespace std;

void solve()
{
int n;
cin>>n;

vector<int>arr(n,0);
int count=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==i+1){
        count++;
    }
}

if(count<=1){
    cout<<count;
}
else if(count%2==0){
    cout<<count/2;
}
else{
    cout<<(count-1)/2 +1;
}

}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
int t;
cin>>t;
while(t--){
solve();
cout<<'\n';
}
return 0;
}
