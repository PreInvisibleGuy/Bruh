#include<bits/stdc++.h>
using namespace std;
string x;
int dp[100001];
void solve()
{
 dp[0]=1;
 int ml[10];
 memset(ml,0,sizeof ml);
 ml[x[0]-'0']=1;
 int n=x.size();
 for(int i=1;i<=n-1;i++)
 {
     dp[i]=1;
   int mv=0;
   for(int e=0;e<=x[i]-'0';e++)
     mv=max(mv,ml[e]);
   dp[i]=mv+1;
   ml[x[i]-'0']=dp[i];
 }
 int s=*max_element(dp,dp+n);
 cout<<n-s<<endl;
}
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("SODD.INP ","r",stdin);
     freopen("SODD.OUT","w",stdout);
    while(cin>>x)
    {
        solve();
    }
}
