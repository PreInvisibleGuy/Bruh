#include<bits/stdc++.h>
using namespace std;
const int mv=2e6;
long long n,a[1000001],s=0,d[mv+1],x;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Divisor.Inp","r",stdin);
freopen("Divisor.Out ","w ",stdout);
   cin>>n;
   for(int i=1;i<=n;i++)
    {
            cin>>x;
            d[x]++;
    }
    long long ans=0;
    for(int x=1;x<=mv;x++)
    {
       ans+=d[x]*(d[x]-1)/2;
       for(int t=2*x;t<=mv;t=t+x)
       {
           ans+=d[x]*d[t];
       }
    }
    cout<<ans;
}
