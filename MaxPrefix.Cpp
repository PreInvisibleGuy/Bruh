#include<bits/stdc++.h>
using namespace std;
long long a[500006],b[500006],n,s[500006];
int main()
{
          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("MaxPrefix.Inp","r",stdin);
    freopen("MaxPrefix.Out","w ",stdout);
     cin>>n;
     for(int i=1;i<=n;i++)
          cin>>a[i];
     b[1]=a[1];
     for(int i=2;i<=n;i++)
     {
         b[i]=max(b[i-1],a[i]);
     }
     for(int i=1;i<=n;i++)
         cout<<b[i]<<' ';


}
