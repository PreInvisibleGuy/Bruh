#include<bits/stdc++.h>
using namespace std;
long long a[1001],n,x[1001],k,s=0;
int main()
{
            ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Gift.Inp   ","r",stdin);
freopen("Gift.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>k;
    for(int i=1;i<=k;i++)
        cin>>x[i];
    for(int i=1;i<=x[1];i++)
        s=s+a[i];
    cout<<s<<'\n';
    s=0;
    for(int i=2;i<=k;i++)
    {
         x[i]=x[i-1]+x[i];
         for(int j=x[i-1]+1;j<=x[i];j++)
            s=s+a[j];
         cout<<s<<'\n';
         s=0;
    }

}
