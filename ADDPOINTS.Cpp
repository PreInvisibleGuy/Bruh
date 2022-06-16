#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],x,s,d[100001],e;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("ADDPOINTS.INP   ","r",stdin);
freopen("ADDPOINTS.Out ","w ",stdout);
   cin>>n;
   for(int i=1;i<=n;i++)
       cin>>a[i];
    sort(a+1,a+1+n);
   for(int i=1;i<n;i++)
     d[i]=a[i+1]-a[i];
   e=__gcd(d[1],d[2]);
   for(int i=2;i<=n-1;i++)
     e=__gcd(e,d[i]);
if(e<0)
{
    e=e*(-1);
}
   x=(a[n]-a[1])/e;
   x=x+1;
   cout<<x-n;


}
