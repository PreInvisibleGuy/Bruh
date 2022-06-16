#include<bits/stdc++.h>
using namespace std;
long long n,q,a[100001],u=0,v=0,x,b[100001],s[100001];
int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
   if(a[1]%2==0)
   {
       s[1]=1;
       b[1]=0;
   }
   else
   {
       s[1]=0;
       b[1]=1;
   }
   for(int i=2;i<=n;i++)
   {
       if(a[i]%2==0)
       {
           s[i]=s[i-1]+1;
           b[i]=b[i-1];
       }
       else
       {
           s[i]=s[i-1];
           b[i]=b[i-1]+1;
       }
   }
   while(q--)
   {
       cin>>x;
       cout<<s[x]<<' ';
       cout<<b[x]<<'\n';
   }
}
