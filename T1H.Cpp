#include<bits/stdc++.h>
using namespace std;
long long n,a[10001],s=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("T1H.Inp   ","r",stdin);
freopen("T1H.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
  sort(a+1,a+1+n);
  for(int i=1;i<=n;i++)
  {
      s=s+(a[n]-a[i]);
  }
  cout<<s;
}
