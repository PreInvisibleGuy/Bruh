#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],s[100001],x=0;
int main()
{
     freopen("DiffPre.Inp ","r",stdin);
    freopen("DiffPre.Out","w",stdout);
   cin>>n;
   for(int i=1;i<=n;i++)
      cin>>a[i];
   s[1]=a[1];
   for(int i=2;i<=n;i++)
      s[i]=min(s[i-1],a[i]);
   cout<<a[2]-a[1]<<endl;
   for(int i=3;i<=n;i++)
   {
     cout<<a[i]-s[i-1]<<endl;
   }
}
