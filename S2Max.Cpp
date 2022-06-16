#include<bits/stdc++.h>
using namespace std;
int t,a[1000001],n,s,f[1000001];
int solve()
{
    f[1]=a[1];
    for(int i=2;i<=n;i++)
        f[i]=max(f[i-1],a[i]);
    int ans=a[3]+a[1];
    for(int j=4;j<=n;j++)
        ans=max(ans,a[j]+f[j-2]);
    return ans;
}
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("S2Max.Inp   ","r",stdin);
freopen("S2Max.Out ","w ",stdout);
    cin>>t;
    while(t--)
    {
     cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
        cout<<solve()<<'\n';
    }


}
