#include<bits/stdc++.h>
using namespace std;
int n,a[200002],s=0,ans,q,x,f[200002];
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("OddMax.Inp   ","r",stdin);
freopen("OddMax.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
        f[1]=a[1];
    for(int i=2;i<=n;i++)
    {
            f[i]=f[i-1];
            if(a[i]%2!=0)
                f[i]=max(f[i],a[i]);
    }
    cin>>q;
    while(q--)
    {
        cin>>x;
        cout<<f[x]<<'\n';
    }
}
