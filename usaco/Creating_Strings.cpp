#include <iostream>
#include <vector>
#include <set>
using namespace std;

 void permutation(string s,set<string>&v,int i,int n){
        if(i==n){
            v.insert(s);
            return ;
        }

        for(int j=i;j<=n;j++){
            swap( s[i],s[j]);
            permutation(s,v,i+1,n);
            swap(s[i],s[j]);
        }
    }
    

int main(){
    string s;
    cin >> s; 
    set<string> v;
    permutation(s,v, 0, s.size() - 1);

    cout << v.size() << "\n";
    for(auto it:v){
            cout << it << "\n";
    }

    return 0;
}    
