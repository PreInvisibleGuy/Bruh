#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],d[1000001],k;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TKH.Inp   ","r",stdin);
freopen("TKH.Out ","w ",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
      {
          a[i]=a[i]%k;
      }
    for(int i=1;i<=n;i++)
        d[a[i]]++;
    for(int i=0;i<k;i++)
        cout<<d[i]<<'\n';

}
