#include<bits/stdc++.h>
using namespace std;
int a[200002],n,x,ans=0,l,m,r,d,e;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MaxRemain.Inp ","r",stdin);
freopen("MaxRemain.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
   for(int i=1;i<=n-1;i++)
   {
       if(a[i]==1 or a[i]==a[i-1])
        continue;
       else
       {
           int t=1;
           while(a[i]*t<a[n])
           {
               if(a[n]<a[i]*(t+1))
               {
          d=max(d,a[n]-a[i]*t);
            break;
               }
               l=1;
               r=n;
               e=0;
               while(l<=r)
               {
                   m=(l+r)/2;
                   if(a[m]<a[i]*(t+1))
                   {
                       if(a[i]*t<a[m])
                        e=a[m]-a[i]*t;
                       l=m+1;
                   }
                   else
                    r=m-1;
               }
               d=max(d,e);
               t++;

           }
       }
   }
   cout<<d;
}
