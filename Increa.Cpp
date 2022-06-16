#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],b[1000001],s=0;
bool check(int k)
{
    int m=0;
    for(int i=1;i<=n;i++)
    {
        if(i==k) continue;
        else
            b[++m]=a[i];
    }
    for(int i=2;i<=m;i++)
        if(b[i]<b[i-1])
        return false;
    return true;
}
int main()
{
         ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Increa.Inp     ","r",stdin);
freopen("Increa.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    bool u,v;
    for(int i=2;i<=n;i++)
    {
      if(a[i-1]>a[i])
      {
          u=check(i-1);
          v=check(i);
          if(u==false and v==false)
          {
              cout<<"NO";
              return 0;
          }
          else
          {
              cout<<"YES";
              return 0;
          }
      }
    }
    cout<<"YES";
}
