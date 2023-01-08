#include <bits/stdc++.h>
using namespace std;
int n,m, ans=0;
string spotty[100],plain[100];
bool solve(int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(spotty[i][m]==plain[j][m])
				return false;
		}
	}
	return true;
}
int main(){
	ifstream fin("cownomics.in");
	ofstream fout("cownomics.out");
	fin >> n >> m;
	for(int i=0;i<n;i++){
		fin >> spotty[i];
	}
	for(int i=0;i<n;i++){
		fin >> plain[i];
	}
	for(int i=0;i<m;i++){
		if(solve(i))ans++;
	}
	fout << ans << "\n";
	return 0;
}
