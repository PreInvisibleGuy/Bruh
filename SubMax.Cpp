#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],Min=0,kq=0;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SubMax.Inp","r",stdin);
freopen("SubMax.Out","w ",stdout);
    cin>>n;
   cin>>a[1];
    Min=min(a[1],Min);
    for(int i=2;i<=n;i++)
     {
       cin>>a[i];
       a[i]+=a[i-1];
       Min=min(Min,a[i]);
       kq=max(kq,a[i]-Min);
       }
       cout<<kq;
            }

