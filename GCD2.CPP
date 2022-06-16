#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],t,s,d[1000001];
int main()
{
ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("GCD2.INP ","r",stdin);
   freopen("GCD2.OUT","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
      cin>>a[i];
       for(int i=1;i<=n;i++)
    d[a[i]]++;
      for(int x=1e6;x>=1;x--)
      {
          s=0;
          t=1;
          while(t*x<=1e6)
          {
              s=s+d[t*x];
              t++;
          }
          if(s>=2)
          {
              cout<<x;
              return 0;
          }

      }
}
