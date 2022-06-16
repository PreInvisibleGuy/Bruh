#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[10001],n,s=1,ans=0;
    freopen("MAX.INP","r",stdin);
    freopen("MAX.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
          cin>>a[i];
     sort(a+1,a+1+n);
     for(int i=1;i<n;i++)
     {
         if(a[i]==a[i+1])
         {
             s=s+1;

         }
         else
         {
             ans=max(ans,s);
             s=1;
         }

     }
     if(s==n)
     {
         cout<<n;
         return 0;
     }
     cout<<ans;

}
