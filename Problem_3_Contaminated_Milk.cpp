#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;

int N,M,D,S;
vector<vector<ii> > drink(51);
bool sick[51];
int sus_milk[51];

int main()
{
    freopen("badmilk.in","r",stdin);
    freopen("badmilk.out","w",stdout);

    cin>>N>>M>>D>>S;

    for(int i=0;i<D;i++){
        int p,m,t; cin>>p>>m>>t;
        drink[p].push_back(ii(m,t));
    }

    for(int i=0;i<S;i++){
        int p,t; cin>>p>>t;
        for(int j=0;j<drink[p].size();j++){
            if(drink[p][j].second < t){   
                int m=drink[p][j].first;  
                sus_milk[m]++;           
            }
        }
    }

    for(int i=1;i<=N;i++){
        for(int j=0;j<drink[i].size();j++){
            int m=drink[i][j].first;
            if(sus_milk[m] >= S){
                sick[i]=true;
            }
        }
    }

    int ans=0;
    for(int i=1;i<=N;i++) ans+=sick[i];

    cout<<ans;

    return 0;
}