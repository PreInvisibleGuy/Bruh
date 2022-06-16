#include<bits/stdc++.h>
using namespace std;
long long a,b,s=0,m,n,t,ans=1e9;
int main()
{
          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CSN.INP     ","r",stdin);
freopen("CSN.OUt  ","w ",stdout);
    cin>>m>>n;
    s=m*n;
    for(long long i=1;i*i<=s;i++)
    {
        if(s%i==0)
        {
          long long x=__gcd(i,s/i);
          t=i+s/i;
          if(t<ans and x==m)
          {
               ans=t;
               a=min(i,s/i);
               b=max(i,s/i);
          }
        }

    }
    cout<<a<<' '<<b;
}
