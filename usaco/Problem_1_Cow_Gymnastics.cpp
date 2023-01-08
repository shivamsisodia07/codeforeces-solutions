
#include<iostream>
#include<cstdio>
#include <math.h> 
#include<string>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>

using namespace std;
#define ll long long 
int size = 1000;
ll N;

void setIO(string s) {
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

bool compare(ll one, ll two) {
	if (one >= two) return true;
	return false;
}

void solve (ll M) {
	ll ranking[N+1][M+1];
	
	for (ll i = 0; i < N; ++i) {  
		for (ll j = 0; j < M; ++j) {
			ll input; cin >> input;
			ranking[i][input] = j; 
		}
	}
	ll ans = 0;
	for (ll i = 1; i <= M; ++i) {
		for (ll j =i+1; j <= M; ++j) {
			
			ll one = ranking[0][i], two = ranking[0][j]; 
			bool target = compare(one, two);
			bool consist = true;
			for (ll k = 1; k < N; ++k) {
			
				if (compare(ranking[k][i], ranking[k][j]) != target) consist = false;			
			}
			if (consist) ans += 1;
		}
	}	
 	cout << ans;		
}

int main() {
    ios_base::sync_with_stdio(0);
    // setIO("gymnastics");
    ll M;
    cin >> N >> M;
    solve(M);
    return 0;
}