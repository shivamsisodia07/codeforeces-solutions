
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, ans, i, c[600001], x, p, j, sum, sum_z;

    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        sum=sum_z=0;
        ll a[n], pre[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        pre[0]=a[0];
        
        for(i=1; i<n; i++){
            pre[i]=pre[i-1]^a[i];
        }
        
        for(i=0; i<=2*n; i++)
        {
            c[i]=0;
        }
        
        
        for(i=0; i<n; i++)
        {
            for(j=0; j*j<=2*n; j++)
            {
                p=(pre[i]^(j*j));
                //cout<<p<<" ";
                sum=sum+c[p];
                if(p==0){
                    sum++;
                }
            }
            //cout<<sum<<"\n";
            c[pre[i]]++;
        }
        //cout<<sum<<" ";
        ans=(n*(n+1))/2-sum;
        cout<<ans<<"\n";
        
    }
    
}