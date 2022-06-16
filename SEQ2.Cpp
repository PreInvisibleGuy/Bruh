#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[1000001],s=0,b[1000001],kq,c[1000001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // freopen("SEQ2.INP","r",stdin);
  //  freopen("SEQ2.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
       cin>>a[i];
       b[1]=a[1];
      if(a[i]>b[i-1])
      {
          b[i]=a[i];
      }
      else
      {
          b[i]=b[i-1];
      }
    }
    for(int i=n;i>0;--i)
    {
        c[n]=a[n];
      if(a[i]<c[i+1])
      {
          c[i]=a[i];
      }
      else
      {
          c[i]=c[i+1];
      }
    }
    for(int i=2;i<=n;++i)
    {
        kq=max(kq,b[i-1]+a[i]-c[i+1]);
    }
    cout<<kq;

}
