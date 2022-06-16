#include<bits/stdc++.h>
using namespace std;
long long n;
char a[200003];
long long d0=0,d1=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("XEPTAO.INP   ","r",stdin);
freopen("XEPTAO.OUT ","w ",stdout);
    cin>>n;
   n=n*2;
   for(int i=1;i<=n;i++)
      cin>>a[i];

   for(int i=1;i<=n-1;i++)
   {
       if(a[i]=='0' and a[i+1]=='0')
          d0++;
       else
       {
           if(a[i]=='1' and a[i+1]=='1')
              d1++;
       }
   }
   if(d1>d0)
      cout<<d1;
   else
     cout<<d0;
}
