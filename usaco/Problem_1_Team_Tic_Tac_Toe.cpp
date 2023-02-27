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
set<set<char>> S[4];
void solve(char a,char b,char c){
    set<char> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    S[st.size()].insert(st);
}

int main(){
ifstream cin("tttt.in");
ofstream cout("tttt.out");
ios::sync_with_stdio(0); cin.tie(0);
char board[3][3];
    f(i,0,3){
    cin >> board[i][0]>>board[i][1]>>board[i][2];
    }

    solve(board[0][0], board[0][1], board[0][2]);
    solve(board[1][0], board[1][1], board[1][2]); 
    solve(board[2][0], board[2][1], board[2][2]);
    solve(board[0][0], board[1][0], board[2][0]);
    solve(board[0][1], board[1][1], board[2][1]); 
    solve(board[0][2], board[1][2], board[2][2]);
    solve(board[0][0], board[1][1], board[2][2]);
    solve(board[0][2], board[1][1], board[2][0]);

   cout << S[1].size() << endl << S[2].size() << endl;
    return 0;
}
/* stuff you should look for
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */