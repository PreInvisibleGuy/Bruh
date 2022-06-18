#include<bits/stdc++.h>
using namespace std;
long long a[1000001],s[1000001],n,x,y,s1=0;
double sdb;
long long fp(long long x,long long z)
{long long d,c,m,ans=n+1;
float t;
  d=x;
  c=z;
   while(d<=c)
  {
      m=(d+c)/2;
      double t=double(y*(a[m]-a[x])/2);
      if(t>sdb){
        c=m-1;
        ans=m;
      }
      else
      if(a[m]+a[x]<sdb)
      d=m+1;
      else
      d=m+1;

  }
  return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
cin>>n>>sdb>>x>>y;
for(long long i=1;i<=n;i++)
{cin>>a[i];}
sort(a+1,a+n+1);
for(long long i=1;i<=n;i++)
{
    s1+=n-fp(i,n)+1;
}
cout<<s1;
}
