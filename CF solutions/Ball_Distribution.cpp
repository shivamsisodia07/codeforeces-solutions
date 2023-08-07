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

string solve(string s){
if(s.length()%3==1){
        return "YES";
    }
    
    for(char ca='a';ca<='z';ca++){
        int fi=s.length()+1;
        int li=-1;
        for(int i=0;i<s.length();i++){
            if(i%3==0 && s[i]==ca){
                fi=i;
                break;
            }
        }
        
        for(int i=s.length()-1;i>=0;i--){
            int x=s.length()-i-1;
            if(x%3==0 && s[i]==ca){
                li=i;
                break;
            }
        }
        
        if(fi<li){
            return "YES";
        }
    }
    return "NO";
}
 
int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
    string s;
    cin>>s;
cout<<solve(s)<<endl;
}
return 0;
}