#include<bits/stdc++.h>
using namespace std;
long long a[500006],b[500006],n,s[500006];
int main()
{
  ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("MaxSufix.Inp","r",stdin);
    freopen("MaxSufix.Out","w ",stdout);
     cin>>n;
     for(int i=1;i<=n;i++)
          cin>>a[i];
     b[n]=a[n];
     for(int i=n-1;i>=1;i--)
     {
         b[i]=max(b[i+1],a[i]);
     }
     for(int i=1;i<=n;i++)
         cout<<b[i]<<' ';


}

