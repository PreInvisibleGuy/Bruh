#include<bits/stdc++.h>
using namespace std;
long long n,a[200002];
int main()
{
 ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("DDSORT.INP ","r",stdin);
   freopen("DDSORT.OUT","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
      cin>>a[i];
  sort(a+1,a+1+n);
  cout<<a[1]<<' ';
  for(int i=2;i<=n;i++)
  {
      if(a[i]!=a[i-1])
      {
          cout<<a[i]<<' ';
      }
  }

}
