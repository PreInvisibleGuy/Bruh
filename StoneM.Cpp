#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],s=0,m=0,ans=0;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("StoneM.Inp     ","r",stdin);
freopen("StoneM.Out  ","w ",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int x=0;x<=k;x++)
    {
        for(int i=1;i<=x;i++)
             s=s+a[i];
        for(int j=n;j>=n-(k-x)+1;j--)
             m=m+a[j];
        ans=max(ans,s+m);
        s=0;
        m=0;
    }
    cout<<ans;
}
