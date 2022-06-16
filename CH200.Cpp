#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],x=0,s=0,d[200005];
int main()
{
     freopen("CH200.Inp ","r",stdin);
    freopen("CH200.Out","w",stdout);
   cin>>n;

   for(int i=1;i<=n;i++)
   {
      cin>>a[i];
      a[i]=a[i]%200;
      if(a[i]<0)
          a[i]=a[i]+200;
   }
    for(int i=n;i>=1;i--)
    {
        s=s+d[a[i]];
        d[a[i]]++;
    }
    cout<<s;
}
