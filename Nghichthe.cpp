#include<bits/stdc++.h>
using namespace std;
int a[100001],dem,n;
void solve()
{
    long long ans=0;
    int x,dem[11];
    memset(dem,0,sizeof dem);
    for(int j=1;j<=n;j++)
    {
        for(int x=a[j]+1;x<=10;x++)
            ans+=dem[x];
        dem[a[j]]++;
    }
    cout<<ans;
}
int main()
{
             ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("NghichThe.INP","r",stdin);
//freopen("NghichThe.OUT ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(n<=1000)
    {
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(a[i]>a[j])
               dem++;
      cout<<dem;
      return 0;
    }
    else
    {
        solve();
    }

}

