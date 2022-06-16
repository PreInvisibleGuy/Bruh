#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100001],s=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Sum2K.Inp  ","r",stdin);
freopen("Sum2K.Out ","w ",stdout);
   cin>>n>>k;
   for(int i=1;i<=n;i++)
    cin>>a[i];
   sort(a+1,a+1+n);
   int l=1,r=n,m=(l+r)/2;
   while(l<=r)
   {
       m=(l+r)/2;
       if(a[m]==2*k)
       {
           s=s+a[m];
       }
       if(a[m]>2*k)
       {
           r=m-1;
       }
       else
        l=m+1;
   }
   cout<<s;
}
