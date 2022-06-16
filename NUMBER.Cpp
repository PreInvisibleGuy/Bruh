#include<bits/stdc++.h>
using namespace std;
int n=0,a[100001],s=0,t;
int ktra(int x)
{
    if(x<2)
        return 0;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
           return 0;
  return 1;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("NUMBER.Inp ","r",stdin);
//freopen("NUMBER.Out ","w ",stdout);
  while(cin>>t)
  {
      n++;
      a[n]=t;
  }
   for(int i=1;i<n;i++)
   {
     if(ktra(a[i-1])==1 and ktra(a[i+1])==1)
        s=i;
   }
   cout<<s;
}
