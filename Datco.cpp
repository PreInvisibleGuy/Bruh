#include<bits/stdc++.h>
using namespace std;
int n,a[500005],ans=-1e9,s=0,arr[500005][3];
int main()
{
    freopen("DatCo.Inp ", "r", stdin);
    freopen("DatCO.Out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
  a[0]=0;a[n+1]=0;
  for(int i=1;i<=n;i++)
  {
      ans=max(a[i]+a[i-1]+a[i+1],0);
      if(ans>0)
      {
          s=s+ans;
          ans=-1e9;
      }
  }
  cout<<s;

}
