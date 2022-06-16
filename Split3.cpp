#include<bits/stdc++.h>
using namespace std;
int n,a[100001],s=0;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Split3.Inp    ","r",stdin);
freopen("Split3.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        s=s+a[i];
    if(s%3>0)
    {
    cout<<0;
    return 0;
    }
    if(s==0)
    {
        long long ans=1LL*(n-1)*(n-2)/2;
        cout<<ans;
        return 0;
    }
    long long ss=s/3,e=0,x=0,y=0;
   for(int i=1;i<=n;i++)
   {
      e=e+a[i];
      if(e==ss)
          x++;
      if(e>ss)
        break;
   }
   y=0;
   e=0;
   for(int i=n;i>=1;i--)
   {
        e=e+a[i];
        if(e==ss)
             y++;
        if(e>ss)
            break;
   }
   cout<<x*y;

}
