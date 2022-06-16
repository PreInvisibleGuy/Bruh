#include<bits/stdc++.h>
using namespace std;
int n,m,dp[5005][5005],b[5005];
const int base=123456789;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("TotalDivN.Inp", "r", stdin);
    freopen("TotalDivN.Out", "w", stdout);
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];b[i]=b[i]%n;
    }
    dp[1][b[1]]=1;
    for(int i=2;i<=m;i++)
    {
        for(int t=0;t<=n-1;t++)
        {
            dp[i][t]=dp[i-1][t];
            if(b[i]==t)
                dp[i][t]++;
            int e=(t-b[i]+n)%n;
            dp[i][t]=(dp[i][t]+dp[i-1][e])%base;
        }
    }
    cout<<dp[m][0];
}
