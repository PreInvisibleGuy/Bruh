#include<bits/stdc++.h>
using namespace std;
long long a[1001][1001],n,b[1001][1001],c[1001][1001],ans=0;
int main()
{
    freopen("NSQ.INP","r",stdin);
    freopen("NSQ.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
             cin>>a[i][j];
      for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
      {
           b[i][j]=a[i][j]+b[i-1][j-1];
           c[i][j]=a[i][j]+c[i-1][j+1];
      }
      for(long long k=2;k<=n;k++)
        for(long long i=1;i<=n-k+1;i++)
           for(long long j=1;j<=n-k+1;j++)
      {
          long long s=b[i+k-1][j+k-1]-b[i-1][j-1];
          s=s-c[i+k-1][j]+c[i-1][j+k];
          ans=max(ans,s);
      }
      cout<<ans;
}
