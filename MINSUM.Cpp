#include<bits/stdc++.h>
using namespace std;
long long g,l,a,b,s,x,ans=1e9;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MINSUM.INP ","r",stdin);
freopen("MINSUM.Out","w ",stdout);
    cin>>g>>l;
   s=l/g;
   if(l%g!=0)
   {
       cout<<-1;
       return 0;
   }
   for(int i=1;i*i<=s;i++)
   {
       if(s%i==0)
       {
           a=i*g;
           b=s/i*g;
           x=a+b;
           ans=min(ans,x);
       }
   }
   cout<<ans;
}

