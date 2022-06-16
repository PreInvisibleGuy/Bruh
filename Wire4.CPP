#include<bits/stdc++.h>
using namespace std;
long long a,b,c,n;
int s[1001];
int main()
{
   cin>>a>>b>>c;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>s[i];
   }
   for(int i=1;i<=n;i++)
   {
       if(s[i]==a)
          x=i;
       if(s[i]==b)
          y=i;
       if(s[i]==c)
          z=i;
   }
   if(x<y<z)
     cout<<3;
   else
   {
       if(x<y and y>z)
         cout<<2;

   }
}
