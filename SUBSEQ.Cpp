#include<bits/stdc++.h>
using namespace std;
int a[1000001],n,dp[1000001];
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SUBSEQ.INP  ","r",stdin);
freopen("SUBSEQ.OUT","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    dp[n]=a[n];
    for(int i=n-1;i>=1;i--)
    {
        dp[i]=a[i]+max(0,dp[i+1]);
    }
    int m=INT_MIN,j,k,s=0;
    for(int i=1;i<=n;i++)
        if(dp[i]>m)
    {
        m=dp[i];
        j=i;
    }
    for(int i=j;i<=n;i++)
    {
        s=s+a[i];
        if(s==m)
        {
            k=i;
            break;
        }
    }
    cout<<j<<'\n';
    cout<<k<<'\n';
    cout<<m<<'\n';


}
