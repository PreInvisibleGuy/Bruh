#include<bits/stdc++.h>
using namespace std;
long long a,b,k,n=1,s=0,c,d;
long long  isK(long long  x)
{
    if(k==1)
         return x;
         long long  n=1;
   while(1)
   {
       long long  s=1;
       for(long long  i=1;i<=k;i++)
        s=s*n;
       if(s==x)
        return n;
       if(s>x)
          return -1;
       if(s<x)
        n++;
   }

}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("NumPowerK.Inp ","r",stdin);
  freopen("NumPowerK.Out","w ",stdout);

    cin>>a>>b;
    cin>>k;
    while(isK(a)==-1) a++;
    while(isK(b)==-1) b--;
    long long x=isK(a);
    long long y=isK(b);
cout<<max(y-x+1,0LL);


}
