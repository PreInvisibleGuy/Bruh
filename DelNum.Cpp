#include<bits/stdc++.h>
using namespace std;
const int mv=1e6;
long long n,d[1000001],ans,x;
long long f[1000001];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("DelNum.Inp   ","r",stdin);
freopen("DelNum.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        d[x]++;
    }
    for(int i=1;i<=mv;i++)
        f[i]=d[i];
    long long t;
    f[1]=d[1];
    for(int i=1;i<=mv;i++)
    {
       t=2;
       while(i*t<=mv)
       {
           x=i*t;
           f[x]=max(f[x],d[x]+f[i]);
           t++;
       }
    }
    ans=n;
    for(int i=1;i<=mv;i++)
        ans=min(n-f[i],ans);
    cout<<ans;
}
