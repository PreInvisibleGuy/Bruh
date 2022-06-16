#include<bits/stdc++.h>
using namespace std;
long long n,k,a[5001],s=0,dp[5005][5005];
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("DDMAX2.INP","r",stdin);
    freopen("DDMAX2.OUT","w ",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i = 1; i <= n; i++)
          dp[i][i] = a[i];
    for(int i = 1; i < n; i++)
         for(int j = i+1; j<= n; j++)
              dp[i][j] = max(dp[i][j-1], a[j]);
    int j,i;
    while(k--)
    {
        cin>>i>>j;
        cout<<dp[i][j]<<'\n';
    }

}
